/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_puthex_x_args.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lbounor <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/03 13:09:04 by lbounor           #+#    #+#             */
/*   Updated: 2021/12/03 13:19:23 by lbounor          ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/ft_printf.h"

int	ft_puthex_x_args(unsigned int n, int i)
{
	char			*base;

	base = "0123456789abcdef";
	if (n > 15)
		i = ft_puthex_x_args(n / 16, i);
	i += ft_putchar_args(base[n % 16]);
	return (i);
}
