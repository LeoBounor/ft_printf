/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_args_sort.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lbounor <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/01 10:54:12 by Leo               #+#    #+#             */
/*   Updated: 2021/12/03 13:19:11 by lbounor          ###   ########lyon.fr   */
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
	{
		nb_char += ft_putstr_args("0x");
		nb_char = ft_putptr_args(va_arg(args, unsigned long), nb_char);
	}
	if (c == 'd' || c == 'i')
		nb_char += ft_putnbr_args(va_arg(args, int));
	if (c == 'u')
		nb_char += ft_putnbr_unsigned_args(va_arg(args, unsigned int));
	if (c == 'x')
		nb_char = ft_puthex_x_args(va_arg(args, unsigned int), nb_char);
	if (c == 'X')
		nb_char = ft_puthex_ux_args(va_arg(args, unsigned int), nb_char);
	if (c == '%')
		nb_char += ft_percent_args(c);
	return (nb_char);
}
