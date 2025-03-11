/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ljylhank <ljylhank@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/01 17:20:45 by ljylhank          #+#    #+#             */
/*   Updated: 2025/03/11 17:46:12 by ljylhank         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static inline int	set_me_free(char **ptrs, int indx)
{
	while (indx >= 0)
		free(ptrs[indx--]);
	free(ptrs);
	return (-42);
}

static inline void	assign_strs(char *ptr, const char *s, char c)
{
	int	i;

	i = 0;
	while (s[i] != c && s[i])
	{
		ptr[i] = s[i];
		++i;
	}
	ptr[i] = '\0';
}

static inline int	assign_ptrs(char **ptrs, const char *s, char c)
{
	int	a;
	int	b;
	int	indx;

	a = 0;
	indx = 0;
	while (s[a])
	{
		if (s[a] == c)
			++a;
		else
		{
			b = 0;
			while (s[a + b] != c && s[a + b])
				++b;
			ptrs[indx] = malloc((b + 1) * sizeof(char));
			if (!ptrs[indx])
				return (set_me_free(ptrs, indx - 1));
			assign_strs(ptrs[indx], s + a, c);
			++indx;
			a += b;
		}
	}
	return (0);
}

static inline int	count_ptrs(const char *s, char c)
{
	int	i;
	int	ptrc;

	i = 0;
	ptrc = 0;
	while (s[i])
	{
		if (s[i] != c && (s[i + 1] == c || !s[i + 1]))
			++ptrc;
		++i;
	}
	return (ptrc);
}

char	**ft_split(char const *s, char c)
{
	char	**ptrs;
	int		pcount;

	pcount = count_ptrs(s, c);
	ptrs = malloc((pcount + 1) * sizeof(char *));
	if (!ptrs)
		return (0);
	ptrs[pcount] = 0;
	if (assign_ptrs(ptrs, s, c) == -42)
		return (0);
	return (ptrs);
}
