/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jtsang <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/11/06 14:10:31 by jtsang            #+#    #+#             */
/*   Updated: 2019/11/21 13:36:47 by jtsang           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	ft_ischarset(char const *set, char c)
{
	int i;

	i = 0;
	while (set[i])
	{
		if (set[i] == c)
			return (1);
		i++;
	}
	return (0);
}

static char	*ft_strnew(size_t size)
{
	size_t	i;
	char	*str;

	if (!(str = (char*)malloc((size + 1) * sizeof(char))))
		return (NULL);
	i = 0;
	while (i <= size)
		str[i++] = '\0';
	return (str);
}

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
