/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jtsang <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/11/04 11:52:37 by jtsang            #+#    #+#             */
/*   Updated: 2019/11/12 16:53:16 by jtsang           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *dst, const void *src, size_t len)
{
	size_t				i;
	unsigned char		*pdst;
	const unsigned char	*psrc;

	pdst = (unsigned char *)dst;
	psrc = (const unsigned char *)src;
	if (!dst && !src)
		return (NULL);
	i = 1;
	if (psrc < pdst)
		while (i <= len)
		{
			pdst[len - i] = psrc[len - i];
			i++;
		}
	else
		while (len > 0)
		{
			*pdst++ = *psrc++;
			len--;
		}
	return (dst);
}
