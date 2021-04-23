/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mwalter </var/mail/mwalter>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/23 14:40:52 by mwalter           #+#    #+#             */
/*   Updated: 2021/04/23 15:02:46 by mwalter          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	size_t	i;
	size_t	min_len;
	char	*ret;

	if (!s || len <= 0 || start >= ft_strlen(s))
		return (ft_strdup(""));
	else
	{
		min_len = ft_strlen(&s[start]);
		if (min_len < len)
			len = min_len;
		ret = malloc(sizeof(*ret) * (len + 1));
		if (!ret)
			return (NULL);
		i = start;
		while (s[i] && (i - start) < len)
		{
			ret[i - start] = s[i];
			i++;
		}
		ret[i - start] = '\0';
		return (ret);
	}
}
