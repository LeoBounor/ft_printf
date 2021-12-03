/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putptr_args.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lbounor <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/01 13:25:00 by Leo               #+#    #+#             */
/*   Updated: 2021/12/03 12:51:01 by lbounor          ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/ft_printf.h"
#include <stdio.h>

int	ft_putptr_args(unsigned long ptr, int i)
{
	char			*base;

	base = "0123456789abcdef";
	if (ptr > 15)
		i = ft_putptr_args(ptr / 16, i);
	i += ft_putchar_args(base[ptr % 16]);
	return (i);
}
