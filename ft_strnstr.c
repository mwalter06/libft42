/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mwalter </var/mail/mwalter>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/19 18:02:36 by mwalter           #+#    #+#             */
/*   Updated: 2021/04/20 11:12:07 by mwalter          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(const char *haystack, const char *needle, size_t len)
{
	size_t	needle_len;

	if (*needle == '\0')
		return ((char *) haystack);
	needle_len = ft_strlen(needle);
	while (*haystack != '\0' && len-- >= needle_len)
	{
		if (*haystack == *needle
			&& ft_strncmp(haystack, needle, needle_len) == 0)
			return ((char *) haystack);
		haystack++;
	}
	return (NULL);
}
