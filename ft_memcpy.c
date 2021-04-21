/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mwalter </var/mail/mwalter>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/13 12:56:49 by mwalter           #+#    #+#             */
/*   Updated: 2021/04/13 13:02:11 by mwalter          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memcpy(void *dest, const void *src, size_t n)
{
	unsigned char	*pointeur_src;
	unsigned char	*pointeur_dest;

	if (src || dest)
	{
		pointeur_src = (unsigned char *)src;
		pointeur_dest = (unsigned char *)dest;
		while (n--)
			*pointeur_dest++ = *pointeur_src++;
	}
	return (dest);
}
