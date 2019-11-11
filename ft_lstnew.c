/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstnew.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jtsang <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/11/11 13:52:16 by jtsang            #+#    #+#             */
/*   Updated: 2019/11/11 14:44:14 by jtsang           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	*ft_lstnew(void *content)
{
	t_list			*new;
	const char		*con;

	con = (const char *)content;
	if (!(new = (t_list *)malloc(sizeof(t_list))))
		return (NULL);
	if (content == NULL)
	{
		new->content = NULL;
		new->next = NULL;
	}
	else
	{
		if (!(new->content = (void *)malloc(ft_strlen(con) * sizeof(void))))
			return (NULL);
		ft_memcpy(new->content, content, ft_strlen(con));
		new->next = NULL;
	}
	return (new);
}
