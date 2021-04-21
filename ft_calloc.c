/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mwalter </var/mail/mwalter>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/20 11:42:46 by mwalter           #+#    #+#             */
/*   Updated: 2021/04/20 11:54:37 by mwalter          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_calloc(size_t count, size_t n)
{
	void	*ret;

	ret = malloc(n * count);
	if (NULL == ret)
		return (NULL);
	ft_bzero(ret, n * count);
	return (ret);
}
