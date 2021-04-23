/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstmap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mwalter </var/mail/mwalter>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/23 22:22:31 by mwalter           #+#    #+#             */
/*   Updated: 2021/04/23 22:28:56 by mwalter          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	*ft_lstmap(t_list *lst, void *(*f)(void *), void (*del)(void *))
{
	t_list	*pt_head;
	t_list	*pt_next;

	if (!lst)
		return (0);
	pt_head = ft_lstnew(f(lst->content));
	if (!pt_head)
		return (0);
	while (lst->next)
	{
		lst = lst->next;
		pt_next = ft_lstnew(f(lst->content));
		if (!pt_next)
		{
			ft_lstclear(&pt_head, del);
			return (0);
		}
		ft_lstadd_back(&pt_head, pt_next);
	}
	return (pt_head);
}
