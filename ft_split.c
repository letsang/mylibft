/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jtsang <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/11/11 07:06:08 by jtsang            #+#    #+#             */
/*   Updated: 2019/11/17 11:54:13 by jtsang           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	count_strs(char c, const char *s)
{
	int		count;
	int		interupt;
	int		i;

	count = 0;
	interupt = 0;
	i = 0;
	if (!s)
		return (0);
	while (s[i])
	{
		if (s[i] == c)
			interupt = 0;
		else if (interupt == 0)
		{
			interupt = 1;
			count++;
		}
		i++;
	}
	return (count);
}

static char	*ft_strdup_c(const char *src, char c)
{
	int		i;
	char	*dup;

	i = 0;
	while (src[i] != '\0' && src[i] != c)
		i++;
	if (!(dup = (char *)malloc(sizeof(char) * i + 1)))
		return (NULL);
	i = 0;
	while (src[i] != '\0' && src[i] != c)
	{
		dup[i] = src[i];
		i++;
	}
	dup[i] = '\0';
	return (dup);
}

static char	**free_all(char **tab, int i)
{
	while (i > 0)
	{
		i--;
		free(tab[i]);
	}
	free(tab);
	return (NULL);
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
			if (!(tab[j] = ft_strdup_c(s + i, c)))
				return (free_all(tab, j));
			j++;
		}
		i++;
	}
	tab[j] = NULL;
	return (tab);
}
