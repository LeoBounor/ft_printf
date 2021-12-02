/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putptr_args.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: Leo <Leo@student.42lyon.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/01 13:25:00 by Leo               #+#    #+#             */
/*   Updated: 2021/12/02 16:11:01 by Leo              ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/ft_printf.h"

int	ft_putptr_args(void *ptr)
{
	int				i;
	int				rest;
	unsigned long	int_ptr;
	char			base[16];

	i = 0;
	base[16] = "0123456789abcdef";
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
