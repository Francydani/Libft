/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: francysa <francysa@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/04/30 09:11:46 by francysa          #+#    #+#             */
/*   Updated: 2026/04/30 14:19:47 by francysa         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_atoi(const char *str)
{
	int	count;
	int	result;
	int	sign;

	count = 0;
	result = 0;
	sign = 1;
	while (str[count] >= 1 && str[count] <= 32)
		count++;
	if (str[count] == '-')
	{
		sign = -1;
		count++;
	}
	else if (str[count] == '+')
		count++;
	while (str[count] >= '0' && str[count] <= '9')
	{
		result = (result * 10) + (str[count] - '0');
		count++;
	}
	return (result * sign);
}

/*
#include <stdio.h>

int main(void)
{
	char num[10] = " -125a25";
	int rest = ft_atoi(num);
	printf("%d\n", rest);
	return(0);
}
*/