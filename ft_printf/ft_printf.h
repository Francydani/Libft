/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   libftprintf.h                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: francysa <francysa@student.42urduliz.com>  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/05/15 11:35:01 by francysa          #+#    #+#             */
/*   Updated: 2026/05/18 16:15:00 by francysa         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_PRINTF_H
# define FT_PRINTF_H

# include <unistd.h>
# include <stdlib.h>
# include <stdarg.h>

int ft_printf(char const *, ...);
int	ft_putnum_hex(unsigned long long num, char *base);
int	ft_putstr_len(char *s);
int	ft_putchar_len(char c);
int ft_printf_bonus(char const *str, ...);
int	ft_managme_int(va_list list, int sig, int space);
int	ft_managme_hex(va_list list, int hash, char format);
int ft_puthex_bonus(unsigned int num, char *base);
int	ft_int(int num);
int	ft_sig_space(int num, char c);
void	ft_flags(const char *str, int *i, int *sig, int *space, int *hash);


#endif