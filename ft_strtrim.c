/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jtsang <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/11/06 14:10:31 by jtsang            #+#    #+#             */
/*   Updated: 2019/11/10 16:10:44 by jtsang           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char		*ft_strtrim(char const *s1, char const *set)
{
	size_t	lead;
	size_t	trail;
	size_t	len;
	
	lead = 0;
	trail = ft_strlen(s1);
	len = 0;
	if (!s1)
		return (NULL);
	else
	{
		while (s1[lead] && ft_ischarset(set, s1[lead]))
			lead++;
		while (trail > lead && ft_ischarset(set, s1[trail - 1]))
			trail--;
	}
	len = trail - lead;
	return (ft_substr(s1, (unsigned int)lead, len)); 
}
