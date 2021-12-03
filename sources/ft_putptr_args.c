/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putptr_args.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lbounor <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/01 13:25:00 by Leo               #+#    #+#             */
/*   Updated: 2021/12/03 08:13:07 by lbounor          ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/ft_printf.h"

int	ft_putptr_args(void *ptr)
{
	int				i;
	int				rest;
	unsigned long	int_ptr;
	char			*base;

	i = 0;
	base = "0123456789abcdef";
	int_ptr = (unsigned long)ptr;
	i += ft_putstr_args("0x");
	while (int_ptr > 15)
	{
		rest = int_ptr % 16;
		i += ft_putchar_args(base[rest]);
		int_ptr /= 16;
	}
	i += ft_putchar_args(base[int_ptr]);
	return (i);
}
