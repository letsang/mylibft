/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jtsang <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/11/04 11:52:37 by jtsang            #+#    #+#             */
/*   Updated: 2019/11/23 16:36:56 by jtsang           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *dst, const void *src, size_t len)
{
	size_t				i;
	unsigned char		*pdst;
	const unsigned char	*psrc;

	i = 0;
	pdst = (unsigned char *)dst;
	psrc = (const unsigned char *)src;
	if (dst == NULL && src == NULL)
		return (dst);
	if (pdst < psrc)
		while (i < len)
		{
			pdst[i] = psrc[i];
			i++;
		}
	else
		while (i < len)
		{
			pdst[len - i - 1] = psrc[len - i - 1];
			i++;
		}
	return (dst);
}
