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

char	*ft_obtain_line(char *line)
{
	size_t	i;
	char	*tem;

	i = 0;
	if (!line || !line[i])
		return (NULL);
	while (line[i] && line[i] != '\n')
		i++;
	if (line[i] == '\n')
		tem = malloc(i + 2);
	else
		tem = malloc(i + 1);
	if (!tem)
		return (NULL);
	i = 0;
	while (line[i] && line[i] != '\n')
	{
		tem[i] = line[i];
		i++;
	}
	if (line[i] == '\n')
		tem[i++] = '\n';
	tem[i] = '\0';
	return (tem);
}

char	*ft_clean(char *line)
{
	size_t	i;
	size_t	j;
	char	*new;

	i = 0;
	j = 0;
	if (!line)
		return (NULL);
	while (line[i] && line[i] != '\n')
		i++;
	if (!line[i])
	{
		free(line);
		return (NULL);
	}
	new = malloc(ft_strlen(line) - i + 1);
	if (!new)
		return (NULL);
	i++;
	while (line[i])
		new[j++] = line[i++];
	new[j] = '\0';
	free(line);
	return (new);
}

char	*get_next_line(int fd)
{
	char		*buffer;
	char		*line_finish;
	static char	*line;
	ssize_t		byts;

	if (fd < 0 || BUFFER_SIZE <= 0)
		return (NULL);
	buffer = malloc(BUFFER_SIZE + 1);
	if (buffer == NULL)
		return (NULL);
	byts = 1;
	while (!ft_strchr(line, '\n') && byts > 0)
	{
		byts = read(fd, buffer, BUFFER_SIZE);
		if (byts == -1)
			return (free(buffer), NULL);
		buffer[byts] = '\0';
		line = ft_strjoin(line, buffer);
	}
	free(buffer);
	line_finish = ft_obtain_line(line);
	line = ft_clean(line);
	return (line_finish);
}

/*int	main(void)
{
	int		fd;
	char	*linea;
	int	contador;

	fd = open("archivo.txt", O_RDONLY);
	if (fd < 0)
	{
		printf("Error al abrir archivo.txt\n");
		return (1);
	}
	contador = 0;
	while (contador < 2)
	{
		linea = get_next_line(fd);
		printf("%s", linea);
		free (linea);
		contador++;
	}
	close(fd);
	return (0);
}*/

