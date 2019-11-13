/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jtsang <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/11/04 12:27:27 by jtsang            #+#    #+#             */
/*   Updated: 2019/11/12 16:54:41 by jtsang           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static char	*ft_strcpy(char *dest, const char *src)
{
	int i;

	i = 0;
	while (src[i] != '\0')
	{
		dest[i] = src[i];
		i++;
	}
	dest[i] = src[i];
	return (dest);
}

static char	*ft_strcat(char *dst, char const *src)
{
	size_t i;
	size_t j;

	i = 0;
	j = 0;
	while (dst[i])
		i++;
	while (src[j])
	{
		dst[i] = src[j];
		i++;
		j++;
	}
	dst[i] = '\0';
	return (dst);
}

char		*ft_strjoin(char const *s1, char const *s2)
{
	char	*join;

	if (!(join = (char *)malloc((sizeof(char)) *
				(ft_strlen(s1) + ft_strlen(s2) + 1))))
		return (NULL);
	join = ft_strcpy(join, s1);
	join = ft_strcat(join, s2);
	return (join);
}
