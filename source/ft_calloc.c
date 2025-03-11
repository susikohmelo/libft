/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ljylhank <ljylhank@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/31 15:57:20 by ljylhank          #+#    #+#             */
/*   Updated: 2025/03/11 17:37:17 by ljylhank         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdint.h>

void	*ft_calloc(size_t nmemb, size_t size)
{
	size_t	byte_count;
	void	*newmemory;

	if (nmemb == 0 || size == 0)
		return (malloc(0));
	if ((SIZE_MAX / size) < nmemb)
		return (malloc(0));
	byte_count = nmemb * size;
	newmemory = malloc(byte_count);
	if (!newmemory)
		return (newmemory);
	while (byte_count)
		((unsigned char *)newmemory)[--byte_count] = 0;
	return (newmemory);
}
