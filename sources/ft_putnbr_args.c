/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_args.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lbounor <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/01 14:59:09 by Leo               #+#    #+#             */
/*   Updated: 2021/12/03 08:20:47 by lbounor          ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/ft_printf.h"

static int	ft_nblen(long long int n)
{
	int	len;

	len = 0;
	if (n < 0)
	{
		n = n * -1;
		len++;
	}
	while (n >= 0)
	{
		n = n / 10;
		len++;
		if (n == 0)
			break ;
	}
	return (len);
}

static char	*ft_itoa(int n)
{
	int				len;
	int				i;
	char			*strconvert;
	long long int	long_n;

	long_n = n;
	len = ft_nblen(long_n);
	i = 0;
	strconvert = (char *)malloc(sizeof(char) * len + 1);
	if (!strconvert)
		return (NULL);
	strconvert[len--] = '\0';
	if (n == 0)
		strconvert[0] = '0';
	if (n < 0)
	{
		long_n = long_n * -1;
		strconvert[0] = '-';
	}
	while (long_n > 0)
	{
		strconvert[len--] = 48 + (long_n % 10);
		long_n = long_n / 10;
	}
	return (strconvert);
}

int	ft_putnbr_args(int n)
{
	int		i;
	char	*str;

	str = ft_itoa(n);
	i = ft_putstr_args(str);
	free(str);
	return (i);
}
