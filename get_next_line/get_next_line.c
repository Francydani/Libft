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

char *get_next_line(int fd)
{
	char *linea_sig;
	static char	*linea_sin_leer;
	int	byts_leidos;

	if (fd < 0 || BUFFER_SIZE <= 0)
		return (NULL);
	linea_sin_leer = read(fd, linea_sin_leer, &byts_leidos);
	if (!linea_sin_leer)
		return (NULL);


	if (linea_sin_leer < '\n')
	{
        ft_putstr_len(linea_sin_leer);
	}
    return (0);
}

int	main(void)
{
	int		fd;
	char	buffer[1500];
	size_t	bytes_leidos;

	fd = open("archivo.txt", O_RDONLY);
	bytes_leidos = get_next_line(fd);

	while (bytes_leidos >= '\0')
	{
		bytes_leidos++;
	}

	buffer[bytes_leidos] = '\0';
	printf("Leídos %zd bytes. Contenido: %s\n", bytes_leidos, buffer);
	close(fd);

	return (0);
}
