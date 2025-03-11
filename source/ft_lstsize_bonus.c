/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstsize_bonus.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ljylhank <ljylhank@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/04 18:35:18 by ljylhank          #+#    #+#             */
/*   Updated: 2025/03/11 17:41:18 by ljylhank         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_lstsize(t_list *lst)
{
	t_list	*current_list;
	int		i;

	i = 0;
	current_list = lst;
	while (current_list)
	{
		current_list = current_list->next;
		++i;
	}
	return (i);
}
