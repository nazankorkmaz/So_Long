/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nkorkmaz <nkorkmaz@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/18 14:39:18 by nkorkmaz          #+#    #+#             */
/*   Updated: 2023/08/18 14:39:20 by nkorkmaz         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strdup(const char *s1)
{
	size_t	len;
	void	*new;

	len = ft_strlen(s1) + 1;
	new = malloc(len);
	if (new == NULL)
		return (NULL);
	return ((char *) ft_memcpy(new, s1, len));
}
