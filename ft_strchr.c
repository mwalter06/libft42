/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mwalter <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/01 09:24:12 by mwalter           #+#    #+#             */
/*   Updated: 2021/04/20 11:33:27 by mwalter          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strchr(const char *s, int c)
{
	char	*str;

	str = (char *)s;
	if (c == '\0')
		return (str + ft_strlen(str));
	while (*str)
	{
		if (*str == (char)c)
			return (str);
		str++;
	}
	return (0);
}
