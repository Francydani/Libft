/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: francysa <francysa@student.42urduliz.com>  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/05/25 11:32:48 by francysa          #+#    #+#             */
/*   Updated: 2026/05/25 16:12:01 by francysa         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <fcntl.h>   // Para open
#include <unistd.h>
#include <stdlib.h>

char	*ft_obtener_linea(char linea_sin_leer)
{
	size_t	i;
	char	*temporal;

	i = ft_strlen(linea_sin_leer);
	temporal = malloc(i);
	return (temporal);
}

char	*get_next_line(int fd)
{
	char		*buffer_temporal;
	static char	*linea_sin_leer;
	size_t		byts_leidos;

	if (fd < 0 || BUFFER_SIZE <= 0)
		return (NULL);
	buffer_temporal = malloc(BUFFER_SIZE + 1);
	if (buffer_temporal == NULL)
		return (0);
	while (buffer_temporal)
	{
		byts_leidos = read(fd, buffer_temporal, BUFFER_SIZE);
		if (byts_leidos <= 0)
			return (NULL);
		buffer_temporal[byts_leidos] = '\0';
		if (!linea_sin_leer)
			linea_sin_leer = ft_strdup("");
		while (!ft_strchr(linea_sin_leer, '\n') && bytes_leidos > 0)
			linea_sin_leer = ft_strjoin(linea_sin_leer, buffer_temporal);
	}
	free (buffer_temporal);
	return (ft_obtener_linea(linea_sin_leer));
}

int	main(void)
{
	int		fd;
	char	buffer[1500];
	size_t	bytes_leidos;

	fd = open("archivo.txt", O_RDONLY);
	bytes_leidos = get_next_line(fd);
	close(fd);

	return (0);
}
