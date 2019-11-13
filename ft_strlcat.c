/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jtsang <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/11/04 12:27:41 by jtsang            #+#    #+#             */
/*   Updated: 2019/11/11 11:29:50 by jtsang           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcat(char *dst, const char *src, size_t dstsize)
{
	size_t	i;
	size_t	j;
	size_t	dstlen;

	i = 0;
	j = 0;
	dstlen = ft_strlen(dst);
	if (dstsize == 0)
		return (ft_strlen(src) + dstlen);
	else
	{
		while (dst[i] != '\0' && i < dstsize)
			i++;
		while (src[j] != '\0' && i < dstsize - 1)
			dst[i++] = src[j++];
		if (dstsize != 0 && dstsize >= dstlen)
			dst[i] = '\0';
		if (dstsize < ft_strlen(dst))
			return (ft_strlen(src) + dstsize);
		else
			return (ft_strlen(src) + dstlen);
	}
}
