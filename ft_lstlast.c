/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstlast.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mwalter </var/mail/mwalter>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/23 22:12:23 by mwalter           #+#    #+#             */
/*   Updated: 2021/04/23 22:14:38 by mwalter          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	*ft_lstlast(t_list *lst)
{
	t_list	*pt_tmp;

	pt_tmp = lst;
	if (lst)
		while (pt_tmp->next)
			pt_tmp = pt_tmp->next;
	return (pt_tmp);
}
