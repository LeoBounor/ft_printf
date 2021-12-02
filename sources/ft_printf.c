/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: Leo <Leo@student.42lyon.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/27 16:53:33 by Leo               #+#    #+#             */
/*   Updated: 2021/12/02 16:23:42 by Leo              ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/ft_printf.h"

static char	*ft_strcpy(char *dest, char *src)
{
	int		lenght;

	lenght = 0;
	while (src[lenght] != '\0')
	{
		dest[lenght] = src[lenght];
		lenght++;
	}
	dest[lenght] = src[lenght];
	return (dest);
}

char	*ft_strdup(const char *s1)
{
	char	*dup;

	dup = malloc((ft_strlen((char *)s1) + 1) * sizeof(*dup));
	if (dup == 0)
		return (0);
	ft_strcpy(dup, (char *)s1);
	return (dup);
}

int	ft_printf(const char *str, ...)
{
	va_list	args;
	char	*strdup;
	int		i;

	i = 0;
	strdup = ft_strdup(str);
	if (!strdup)
		return (NULL);
	va_start(args, str);
	i = ft_parse_printf(strdup, args);
	va_end(args);
	free(strdup);
	return (i);
}
