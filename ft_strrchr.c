/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jtsang <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/11/04 12:28:44 by jtsang            #+#    #+#             */
/*   Updated: 2019/11/23 15:39:23 by jtsang           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrchr(const char *s, int c)
{
	char	*rchr;

	rchr = 0;
	while (*s)
	{
		if (*s == c)
			rchr = (char *)s;
		s++;
	}
	if (c == 0)
		return ((char *)s);
	return (rchr);
}
