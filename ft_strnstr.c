/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jtsang <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/11/04 12:28:30 by jtsang            #+#    #+#             */
/*   Updated: 2019/11/23 14:52:03 by jtsang           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(const char *haystack, const char *needle, size_t len)
{
	size_t	i;
	size_t	j;

	i = 0;
	while (haystack[i] != '\0' && i <= len)
	{
		j = 0;
		while (haystack[i + j] == needle[j] &&
		haystack[i + j] && i + j < len)
			j++;
		if (needle[j] == '\0')
			return ((char*)haystack + i);
		i++;
	}
	if (haystack[0] == '\0' && needle[0] == '\0')
		return ((char*)haystack);
	return (NULL);
}
