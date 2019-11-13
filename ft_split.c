/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jtsang <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/11/11 07:06:08 by jtsang            #+#    #+#             */
/*   Updated: 2019/11/12 16:55:33 by jtsang           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	count_strs(char c, const char *str)
{
	int count;
	int i;

	count = 0;
	i = 0;
	while (str[i])
	{
		if ((i == 0 && str[0] != c)
			|| (str[i] != c && str[i - 1] == c))
			count++;
		i++;
	}
	return (count);
}

static char	*ft_strdup_c(const char *src, char c)
{
	int		i;
	char	*dup;

	i = 0;
	while (src[i] != c)
		i++;
	if (!(dup = malloc(sizeof(char) * i + 1)))
		return (NULL);
	i = 0;
	while (src[i] != c)
	{
		dup[i] = src[i];
		i++;
	}
	dup[i] = '\0';
	return (dup);
}

char		**ft_split(char const *s, char c)
{
	int		i;
	int		j;
	char	**tab;

	if (!s)
		return (NULL);
	if (!(tab = (char **)malloc(sizeof(char *) * (count_strs(c, s) + 1))))
		return (NULL);
	i = 0;
	j = 0;
	while (s[i])
	{
		if ((i == 0 && s[0] != c)
			|| (s[i] != c && s[i - 1] == c))
		{
			tab[j] = ft_strdup_c(s + i, c);
			j++;
		}
		i++;
	}
	tab[j] = NULL;
	return (tab);
}
