/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: francysa <francysa@student.42urduliz.com>  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/05/11 09:24:47 by francysa          #+#    #+#             */
/*   Updated: 2026/05/12 16:42:38 by francysa         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	counter_digits(int n)
{
	int	counter;

	counter = 0;
	if (n <= 0)
		counter = 1;
	while (n != 0)
	{
		n = n / 10;
		counter++;
	}
	return (counter);
}

char	*ft_itoa(int n)
{
	int		len;
	int		last_digit;
	char	*ptr;

	len = counter_digits(n);
	ptr = malloc(sizeof(char) * (len + 1));
	if (!ptr)
		return (0);
	ptr[len] = '\0';
	if (n == 0)
		ptr[0] = '0';
	if (n < 0)
		ptr[0] = '-';
	while (n != 0)
	{
		last_digit = n % 10;
		if (last_digit < 0)
			last_digit = -last_digit;
		ptr[len - 1] = last_digit + '0';
		n = n / 10;
		len--;
	}
	return (ptr);
}

/*
#include <stdio.h>

int	main(void)
{
	char *res;
	
	res = ft_itoa(-12540);
	printf("%s\n", res);
	free(res);
	return (0);
}
*/
