/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memccpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jtsang <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/11/04 12:26:04 by jtsang            #+#    #+#             */
/*   Updated: 2019/11/07 11:29:02 by jtsang           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memccpy(void *dst, const void *src,
		int c, size_t n)
{
	size_t	i;
	char	*pdst;
	char	*psrc;

	pdst = (char *)dst;
	psrc = (char *)src;
	i = 0;
	while (i < n)
	{
		pdst[i] = psrc[i];
		if (psrc[i] == (char)c)
			return (&dst[i + 1]);
		i++;
	}
	return (NULL);
}