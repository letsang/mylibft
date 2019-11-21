/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jtsang <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/11/04 12:25:54 by jtsang            #+#    #+#             */
/*   Updated: 2019/11/12 16:56:00 by jtsang           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	count_digit(long nb)
{
	int		nbr;
	int		count;

	nbr = nb;
	count = 1;
	if (nb < 0)
	{
		count = 2;
		nbr = -nb;
	}
	while (nbr >= 10)
	{
		nbr = nbr / 10;
		count++;
	}
	return (count);
}

char		*ft_itoa(int n)
{
	char	*str;
	int		i;
	int		nbr;
	int		nb_digit;

	i = 0;
	nbr = n;
	if (n < -2147483647)
		return (ft_strdup("-2147483648"));
	nb_digit = count_digit(n);
	if (n < 0)
		nbr = -nbr;
	if (!(str = (char*)malloc((nb_digit + 1) * sizeof(char))))
		return (NULL);
	str[nb_digit] = '\0';
	i = nb_digit - 1;
	while (i >= 0)
	{
		str[i] = nbr % 10 + 48;
		nbr = nbr / 10;
		i--;
	}
	if (n < 0)
		str[0] = '-';
	return (str);
}
