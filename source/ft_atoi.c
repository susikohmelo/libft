/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ljylhank <ljylhank@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/30 14:21:00 by ljylhank          #+#    #+#             */
/*   Updated: 2025/03/13 20:00:19 by ljylhank         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <limits.h>

int	ft_atoi(const char *nptr)
{
	int			i;
	long		new_int;
	int			sign;

	i = 0;
	new_int = 0;
	sign = 1;
	while (nptr[i] && (nptr[i] == ' ' || nptr[i] == '\t' || nptr[i] == '\r'
			|| nptr[i] == '\n' || nptr[i] == '\v' || nptr[i] == '\f'))
		++i;
	if (nptr[i] == '-' || nptr[i] == '+')
	{
		if (nptr[i] == '-')
			sign = -1;
		++i;
	}
	while (nptr[i] >= '0' && nptr[i] <= '9')
	{
		new_int = new_int * 10 + nptr[i] - '0';
		if (LONG_MAX / 10 < new_int * 10)
			return (-(sign == 1));
		++i;
	}
	return (new_int * sign);
}
