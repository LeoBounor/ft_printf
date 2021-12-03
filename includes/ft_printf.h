/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lbounor <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/27 16:53:20 by Leo               #+#    #+#             */
/*   Updated: 2021/12/03 08:21:05 by lbounor          ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_PRINTF_H
# define FT_PRINTF_H

# include <stdarg.h>
# include <unistd.h>
# include <stdlib.h>

int		ft_printf(const char *str, ...);
int		ft_parse_printf(char *str, va_list args);
int		ft_args_sort(int c, va_list args);

int		ft_putchar_args(int c);
int		ft_putstr_args(char *str);
int		ft_putptr_args(void *ptr);
int		ft_putnbr_args(int n);
int		ft_putnbr_unsigned_args(unsigned int n);
int		ft_puthex_args(unsigned int n, int c);
int		ft_percent_args(int c);

#endif