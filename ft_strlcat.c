/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mwalter </var/mail/mwalter>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/19 10:32:36 by mwalter           #+#    #+#             */
/*   Updated: 2021/04/19 11:37:41 by mwalter          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcat(char *dest, const char *src, size_t len)
{
	char		*d;
	size_t		n;
	size_t		dlen;
	const char	*s;

	d = dest;
	s = src;
	n = len;
	while (n-- != 0 && *d != '\0')
		d++;
	dlen = d - dest;
	n = len - dlen;
	if (n == 0)
		return (dlen + ft_strlen(s));
	while (*s != '\0')
	{
		if (n != 1)
		{
			*d++ = *s;
			n--;
		}
		s++;
	}
	*d = '\0';
	return (dlen + (s - src));
}
