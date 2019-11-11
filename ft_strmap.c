/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jtsang <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/11/11 06:57:34 by jtsang            #+#    #+#             */
/*   Updated: 2019/11/11 12:19:17 by jtsang           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strmap(const char *s, char (*f)(char))
{
	int		i;
	int		len;
	char	*map;

	len = ft_strlen(s);
	if (!(map = (char *)malloc((len + 1) * sizeof(char))))
		return (NULL);
	i = 0;
	while (s[i])
	{
		map[i] = (*f)(s[i]);
		i++;
	}
	map[i] = '\0';
	return (map);
}
