#include <stdio.h>

int	ft_strncmp(const char *s1, const char *s2, size_t n)
{
	size_t	count;

	count = 0;
	if (n == 0)
		return (0);
	while (count < n - 1 && s1[count] && s1[count] == s2[count])
		count++;
	return ((unsigned char)s1[count] - (unsigned char)s2[count]);
}

int	flag_simple(char argv)
{
	printf("listo");
	return 0;
}

int	ft_flags(int argc, char argv[])
{
	int	i;

	i = 1;
	while (argv[i] == '-')
	{
			flag_simple(argv[i]);
			i++;
	}
	return (0);
}

int	main(int argc, char *argv[])
{
	if(argc < 1)
		return (0);
	ft_flags(argc, argv);
	int	i;
	i = 1;

	while (i < argc)
	{
		printf("%s\n", argv[i]);
		i++;
	}
	return (0);
}