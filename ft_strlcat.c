/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jtsang <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/11/04 12:27:41 by jtsang            #+#    #+#             */
/*   Updated: 2019/11/21 12:43:08 by jtsang           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcat(char *dst, const char *src, size_t dstsize)
{
	size_t i;
	size_t j;

	i = 0;
	j = ft_strlen(dst);
	if (dstsize == 0)
		return (ft_strlen(src));
	if (j > dstsize - 1)
		return (dstsize + ft_strlen(src));
	while (src[i] != '\0' && i + j < dstsize - 1)
	{
		dst[i + j] = src[i];
		i++;
	}
	dst[i + j] = '\0';
	return (j + ft_strlen(src));
}
