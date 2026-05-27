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

#include "get_next_line.h"
#include <stdio.h>
#include <fcntl.h>

char	*ft_obtener_linea(char *linea_sin_leer)
{
	size_t	i;
	char	*temporal;

	i = 0;
	if (!linea_sin_leer || !linea_sin_leer[i])
		return (NULL);
	while (linea_sin_leer[i] && linea_sin_leer[i] != '\n')
		i++;
	if (linea_sin_leer[i] == '\n')
		temporal = malloc(i + 2);
	else
		temporal = malloc(i + 1);
	if (!temporal)
		return (NULL);
	i = 0;
	while (linea_sin_leer[i] && linea_sin_leer[i] != '\n')
	{
		temporal[i] = linea_sin_leer[i];
		i++;
	}
	if (linea_sin_leer[i] == '\n')
		temporal[i++] = '\n';
	temporal[i] = '\0';
	return (temporal);
}

char	*ft_clean(char *linea_sin_leer)
{
	size_t	i;
	size_t	j;
	char	*nueva;

	i = 0;
	j = 0;
	if (!linea_sin_leer)
		return (NULL);
	while (linea_sin_leer[i] && linea_sin_leer[i] != '\n')
		i++;
	if (!linea_sin_leer[i])
	{
		free(linea_sin_leer);
		return (NULL);
	}
	nueva = malloc(ft_strlen(linea_sin_leer) - i + 1);
	if (!nueva)
		return (NULL);
	i++;
	while (linea_sin_leer[i])
		nueva[j++] = linea_sin_leer[i++];
	nueva[j] = '\0';
	free(linea_sin_leer);
	return (nueva);
}

char	*get_next_line(int fd)
{
	char		*buffer;
	char		*linea_final;
	static char	*linea_sin_leer;
	long		byts_leidos;

	if (fd < 0 || BUFFER_SIZE <= 0)
		return (NULL);
	buffer = malloc(BUFFER_SIZE + 1);
	if (buffer == NULL)
		return (NULL);
	byts_leidos = 1;
	while (!ft_strchr(linea_sin_leer, '\n') && byts_leidos > 0)
	{
		byts_leidos = read(fd, buffer, BUFFER_SIZE);
		if (byts_leidos == -1)
			return (free(buffer), NULL);
		buffer[byts_leidos] = '\0';
		linea_sin_leer = ft_strjoin(linea_sin_leer, buffer);
	}
	free(buffer);
	linea_final = ft_obtener_linea(linea_sin_leer);
	linea_sin_leer = ft_clean(linea_sin_leer);
	return (linea_final);
}


int	main(void)
{
	int		fd;
	char	*linea;

	fd = open("archivo.txt", O_RDONLY);
	if (fd < 0)
	{
		printf("Error al abrir archivo.txt\n");
		return (1);
	}
	while ((linea = get_next_line(fd)) != NULL)
	{
		printf("%s", linea);
		free (linea); 
	}
	close(fd);
	return (0);
}
