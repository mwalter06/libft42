/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mwalter </var/mail/mwalter>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/20 12:01:05 by mwalter           #+#    #+#             */
/*   Updated: 2021/04/20 12:06:34 by mwalter          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strdup(const char *str)
{
	char	*ret;
	int		len;

	len = ft_strlen(str);
	ret = malloc(sizeof(char) * len + 1);
	if (NULL == ret)
		return (NULL);
	len = 0;
	while (str[len])
	{
		ret[len] = str[len];
		len++;
	}
	ret[len] = '\0';
	return (ret);
}
