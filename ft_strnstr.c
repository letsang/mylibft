/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jtsang <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/11/04 12:28:30 by jtsang            #+#    #+#             */
/*   Updated: 2019/11/10 14:59:46 by jtsang           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(const char *haystack, const char *needle, size_t len)
{
	size_t i;

	i = 0;
	if (needle[i] == '\0' && len == 0)
		return (char *)haystack;
	else
	{
		while (i < len && haystack[i])
		{
			if ((ft_strncmp(haystack + i, needle, ft_strlen(needle)) == 0)
					&& (len >= i + ft_strlen(needle)))
				return (char *)(haystack + i);
			i++;
		}
	}
	return (NULL);
}
