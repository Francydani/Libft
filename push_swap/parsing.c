#include <stdio.h>

int	ft_flags(int argc, argv[])
{
	int	i;

	i = 0;
	while (argv[i] == '--')
	{
		if (argv[i++] == 'simple')
			flag_simple(argv[i]);
	}
	return (0);
}

int	flag_simple(int i, char argv)
{
	printf("listo");
	return 0;
}