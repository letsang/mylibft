/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstclear.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jtsang <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/11/21 09:04:19 by jtsang            #+#    #+#             */
/*   Updated: 2019/11/22 05:50:13 by jtsang           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstclear(t_list **lst, void (*del)(void *))
{
	t_list *link;
	t_list *tmp;

	if (!(*lst))
		return ;
	link = *lst;
	while (link != NULL)
	{
		tmp = link->next;
		del(link);
		link = tmp;
	}
	*lst = NULL;
}
