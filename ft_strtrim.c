/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jtsang <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/11/06 14:10:31 by jtsang            #+#    #+#             */
/*   Updated: 2019/11/26 10:56:02 by jtsang           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char		*ft_strtrim(char const *s1, char const *set)
{
	size_t	lead;
	size_t	trail;
	size_t	len;

	if (!s1)
		return (NULL);
	if (!set)
		return (ft_strdup(s1));
	lead = 0;
	while (s1[lead] && ft_ischarset(set, s1[lead]))
		lead++;
	trail = ft_strlen(s1);
	while (trail > lead && ft_ischarset(set, s1[trail - 1]))
		trail--;
	len = trail - lead;
	if (len == 0)
		return (ft_strnew(0));
	else
		return (ft_substr(s1, (unsigned int)lead, len));
}
