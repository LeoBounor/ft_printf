/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_args_sort.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lbounor <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/01 10:54:12 by Leo               #+#    #+#             */
/*   Updated: 2021/12/03 08:10:20 by lbounor          ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/ft_printf.h"

int	ft_args_sort(int c, va_list args)
{
	int	nb_char;

	nb_char = 0;
	if (c == 'c')
		nb_char += ft_putchar_args(va_arg(args, int));
	if (c == 's')
		nb_char += ft_putstr_args(va_arg(args, char *));
	if (c == 'p')
		nb_char += ft_putptr_args(va_arg(args, void *));
	if (c == 'd' || c == 'i')
		nb_char += ft_putnbr_args(va_arg(args, int));
	if (c == 'u')
		nb_char += ft_putnbr_unsigned_args(va_arg(args, unsigned int));
	if (c == 'x' || c == 'X')
		nb_char += ft_puthex_args(va_arg(args, unsigned int), c);
	if (c == '%')
		nb_char += ft_percent_args(c);
	return (nb_char);
}
