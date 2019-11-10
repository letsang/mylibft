/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jtsang <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/11/04 12:27:27 by jtsang            #+#    #+#             */
/*   Updated: 2019/11/10 17:51:45 by jtsang           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char		*ft_strjoin(char const *s1, char const *s2)
{
	char	*join;

	if (!(join = (char *)malloc((sizeof(char)) * 
					(ft_strlen(s1) + ft_strlen(s2) + 1))))
		return (NULL);
	join = ft_strcat((char *)s1, s2);
	return (join);
}
