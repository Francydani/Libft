/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: francysa <francysa@student.42urduliz.com>  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/04/28 14:35:38 by francysa          #+#    #+#             */
/*   Updated: 2026/05/12 16:43:13 by francysa         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_memcmp(const void *s1, const void *s2, size_t n)
{
	unsigned char	*ts1;
	unsigned char	*ts2;
	size_t			counter;

	ts1 = (unsigned char *)s1;
	ts2 = (unsigned char *)s2;
	counter = 0;
	while (counter < n && ts1[counter] == ts2[counter])
		counter++;
	if (counter == n)
		return (0);
	return (ts1[counter] - ts2[counter]);
}

/*
#include <stdio.h>

int	main(void)
{
	char a[3] = {82, 81, 84};
	char b[3] = {82, 81, 84};
	int i;

	i = ft_memcmp(a, b, 3);
	printf( "a is " );
	if( i < 0 )  printf( "less than" );
	else if( i > 0 )  printf( "greater than" );
	else  printf( "equal" );
	printf( " b\n" );

	return 0;
}
*/
