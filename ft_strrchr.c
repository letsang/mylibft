/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jtsang <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/11/04 12:28:44 by jtsang            #+#    #+#             */
/*   Updated: 2019/11/06 10:27:30 by jtsang           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrchr(const char *s, int c)
{
	int		i;
	char	*rchr;

	i = 0;
	rchr = NULL;
	while (s[i])
	{
		if ((char)s[i] == (char)c)
			rchr = (char *)&s[i];
		i++;
	}
	if ((char)s[i] == (char)c)
		return ((char *)&s[i]);
	return (rchr);
}
