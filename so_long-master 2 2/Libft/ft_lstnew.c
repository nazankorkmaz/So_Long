/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstnew.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nkorkmaz <nkorkmaz@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/18 14:31:28 by nkorkmaz          #+#    #+#             */
/*   Updated: 2023/08/18 14:31:30 by nkorkmaz         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	*ft_lstnew(void *content)
{
	t_list	*first;

	first = malloc(sizeof(*first));
	if (!first)
		return (NULL);
	first->content = content;
	first->next = NULL;
	return (first);
}
