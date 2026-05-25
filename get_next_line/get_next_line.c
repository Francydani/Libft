#include <>
#include <unistd.h>

char *get_next_line(int fd)
{
	char *linea_sig;
	static char	*linea_sin_leer;
	int	byts_leidos;

	if (fd < 0 || BUFFER_SIZE <= 0)
		return (NULL);
	linea_sin_leer = read(fd, linea_sin_leer, &bytes_leidos);
	if (!linea_sin_leer)
		return (NULL);
	linea;
	linea = '\0';
	
	;
	
	if (esta == '\n')
	{
		

	}
	while( <= '\n')
}
