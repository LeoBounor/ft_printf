/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lbounor <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/27 16:53:33 by Leo               #+#    #+#             */
/*   Updated: 2021/12/03 13:35:01 by lbounor          ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/ft_printf.h"

int	ft_printf(const char *str, ...)
{
	va_list	args;
	int		i;

	i = 0;
	va_start(args, str);
	i = ft_parse_printf((char *)str, args);
	va_end(args);
	return (i);
}
