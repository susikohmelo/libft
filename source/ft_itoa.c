/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ljylhank <ljylhank@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/01 16:41:57 by ljylhank          #+#    #+#             */
/*   Updated: 2025/03/11 17:40:22 by ljylhank         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static inline int	int_length(long n)
{
	int	i;

	if (n == 0)
		return (1);
	i = 0;
	if (n < 0)
	{
		++i;
		n *= -1;
	}
	while (n > 0)
	{
		n /= 10;
		++i;
	}
	return (i);
}

char	*ft_itoa(int n)
{
	char	*str;
	int		i;
	int		ilen;
	long	nl;

	nl = n;
	ilen = int_length(nl);
	str = malloc((ilen + 1) * sizeof(char));
	if (!str)
		return (0);
	i = ilen - 1;
	str[ilen] = '\0';
	if (nl < 0)
	{
		*str = '-';
		nl *= -1;
	}
	while (ilen > 0 && str[i] != '-')
	{
		str[i] = nl % 10 + '0';
		nl /= 10;
		--ilen;
		--i;
	}
	return (str);
}
