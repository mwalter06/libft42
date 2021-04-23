/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstiter.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mwalter </var/mail/mwalter>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/23 21:59:04 by mwalter           #+#    #+#             */
/*   Updated: 2021/04/23 22:02:54 by mwalter          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstiter(t_list *lst, void (*f)(void *))
{
	t_list	*pt_tmp;

	if (lst)
	{
		pt_tmp = lst;
		while (pt_tmp)
		{
			f(pt_tmp->content);
			pt_tmp = pt_tmp->next;
		}
	}
}
