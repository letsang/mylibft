/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jtsang <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/11/04 12:24:29 by jtsang            #+#    #+#             */
/*   Updated: 2019/11/12 17:11:57 by jtsang           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	count_sign(const char *str)
{
	int		count;

	count = 0;
	while (str[count] && (str[count] == '-' || str[count] == '+'))
		count++;
	return (count);
}

int			ft_atoi(const char *str)
{
	int		i;
	int		sign_minus;
	long	res;

	i = 0;
	sign_minus = 0;
	res = 0;
	while (str[i] && (str[i] == '\t' || str[i] == '\n' || str[i] == '\v' ||
				str[i] == '\f' || str[i] == '\r' || str[i] == ' '))
		i++;
	while (str[i] && (str[i] == '-' || str[i] == '+'))
	{
		if (count_sign(str + i) > 1)
			return (0);
		if (str[i] == '-')
			sign_minus++;
		i++;
	}
	while (str[i] && (str[i] >= 48 && str[i] <= 57))
		res = res * 10 + str[i++] - 48;
	if (sign_minus)
		return ((int)res * -1);
	else
		return ((int)res);
}
