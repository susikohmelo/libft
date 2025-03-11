/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ljylhank <ljylhank@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/31 17:45:59 by ljylhank          #+#    #+#             */
/*   Updated: 2025/03/11 17:46:42 by ljylhank         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strdup(const char *s)
{
	int		i;
	char	*newstr;

	i = ft_strlen(s);
	newstr = (char *)malloc((i + 1) * sizeof(char));
	if (!newstr)
		return (newstr);
	i = 0;
	while (s[i])
	{
		newstr[i] = ((char *)s)[i];
		++i;
	}
	newstr[i] = '\0';
	return (newstr);
}
