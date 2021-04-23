/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstnew.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mwalter </var/mail/mwalter>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/23 21:36:49 by mwalter           #+#    #+#             */
/*   Updated: 2021/04/23 22:05:16 by mwalter          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	*ft_lstnew(void *content)
{
	t_list	*pt_new;

	pt_new = malloc(sizeof(*pt_new));
	if (!pt_new)
		return (NULL);
	pt_new->next = NULL;
	pt_new->content = content;
	return (pt_new);
}
