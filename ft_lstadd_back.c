/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstadd_back.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mwalter </var/mail/mwalter>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/23 21:42:06 by mwalter           #+#    #+#             */
/*   Updated: 2021/04/23 21:46:24 by mwalter          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstadd_back(t_list **alst, t_list *new)
{
	t_list	*pt_tmp;

	if (alst)
	{
		if (!(*alst))
		{
			*alst = new;
		}
		else
		{
			pt_tmp = ft_lstlast(*(alst));
			pt_tmp->next = new;
		}
	}
}
