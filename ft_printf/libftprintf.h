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

#ifndef LIBFTPRINTF_H
# define LIBFTPRINTF_H

# include <unistd.h>
# include <stdlib.h>
# include <stdarg.h>

int	ft_printf(char const *, ...);
void	ft_putstr_fd(char *s, int fd);
size_t	ft_strlen(const char *s);
void	ft_putchar_fd(char c, int fd);

#endif
