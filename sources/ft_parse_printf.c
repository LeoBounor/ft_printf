/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_parse_printf.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: Leo <Leo@student.42lyon.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/30 09:44:29 by Leo               #+#    #+#             */
/*   Updated: 2021/12/01 10:53:19 by Leo              ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/ft_printf.h"

int	ft_parse_printf(char *str, va_list args)
{
	int	i;
	int	nb_char;

	i = 0;
	nb_char = 0;
	while (str[i])
	{
		if (str[i] == '%' && str[i + 1] != '\0')
		{
			i++;
			if (str[i] == 'c' || str[i] == 's' || str[i] == 'p'
				|| str[i] == 'd' || str[i] == 'i' || str[i] == 'u'
				|| str[i] == 'x' || str[i] == '%')
				nb_char += ft_args_sort(str[i], args);
		}
	}
}
