/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstadd_back.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nkorkmaz <nkorkmaz@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/18 14:30:09 by nkorkmaz          #+#    #+#             */
/*   Updated: 2023/08/18 14:30:11 by nkorkmaz         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstadd_back(t_list **lst, t_list *new)
{
	if (*lst == NULL)
	{
		*lst = new;
		return ;
	}
	ft_lstlast(*lst)->next = new;
}
