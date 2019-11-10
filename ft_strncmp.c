/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jtsang <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/11/05 18:36:04 by jtsang            #+#    #+#             */
/*   Updated: 2019/11/06 10:46:24 by jtsang           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_strncmp(const char *s1, const char *s2, size_t n)
{
	size_t i;

	i = 0;
	while ((unsigned char)s1[i] && (unsigned char)s2[i] && i < n)
	{
		if ((unsigned char)s1[i] != (unsigned char)s2[i])
			return ((unsigned char)s1[i] - (unsigned char)s2[i]);
		i++;
	}
	if ((((unsigned char)s1[i] == '\0' && (unsigned char)s2[i]) ||
				((unsigned char)s1[i] && (unsigned char)s2[i] == '\0')) && (i < n))
		return ((unsigned char)s1[i] - (unsigned char)s2[i]);
	return (0);
}
