/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jtsang <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/11/06 11:37:15 by jtsang            #+#    #+#             */
/*   Updated: 2019/11/06 11:40:46 by jtsang           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_calloc(size_t count, size_t size)
{
	size_t	i;
	char	*mem;

	if (!(mem = (char*)malloc(count * size * sizeof(char))))
		return (NULL);
	i = 0;
	while (i < count * size)
		mem[i++] = 0;
	return ((void*)mem);
}
