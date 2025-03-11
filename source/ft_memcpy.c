/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ljylhank <ljylhank@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/30 15:58:14 by ljylhank          #+#    #+#             */
/*   Updated: 2025/03/11 17:42:04 by ljylhank         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memcpy(void *dest, const void *src, size_t n)
{
	size_t	i;

	i = 0;
	while (i < n)
	{
		((unsigned char *)dest)[i] = ((unsigned char *)src)[i];
		++i;
	}
	return (dest);
}
