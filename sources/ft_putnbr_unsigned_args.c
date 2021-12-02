/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_unsigned_args.c                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: Leo <Leo@student.42lyon.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/02 15:15:14 by Leo               #+#    #+#             */
/*   Updated: 2021/12/02 15:24:05 by Leo              ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/ft_printf.h"

static int	ft_nblen(unsigned long long int n)
{
	int	len;

	len = 0;
	while (n >= 0)
	{
		n = n / 10;
		len++;
		if (n == 0)
			break ;
	}
	return (len);
}

char	*ft_unsigned_itoa(unsigned int n)
{
	int						len;
	int						i;
	char					*strconvert;
	unsigned long long int	long_n;

	long_n = n;
	len = ft_nblen(long_n);
	i = 0;
	strconvert = (char *)malloc(sizeof(char) * len + 1);
	if (!strconvert)
		return (NULL);
	strconvert[len--] = '\0';
	if (n == 0)
		strconvert[0] = '0';
	while (long_n > 0)
	{
		strconvert[len--] = 48 + (long_n % 10);
		long_n = long_n / 10;
	}
	return (strconvert);
}

int	ft_putnbr_unsigned_args(unsigned int n)
{
	int		i;
	char	*str;

	str = ft_unsigned_itoa(n);
	i = ft_putstr_args(str);
	free(str);
	return (i);
}
