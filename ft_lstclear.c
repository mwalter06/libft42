/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstclear.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mwalter </var/mail/mwalter>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/23 21:48:30 by mwalter           #+#    #+#             */
/*   Updated: 2021/04/23 21:52:35 by mwalter          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstclear(t_list **lst, void (*del)(void *))
{
	t_list	*pt_tmp;

	if (lst && *lst)
	{
		pt_tmp = *lst;
		while (pt_tmp)
		{
			*lst = (*lst)->next;
			ft_lstdelone(pt_tmp, del);
			pt_tmp = *lst;
		}
	}
}
