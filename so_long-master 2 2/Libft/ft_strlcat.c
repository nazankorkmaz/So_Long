/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nkorkmaz <nkorkmaz@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/18 14:39:33 by nkorkmaz          #+#    #+#             */
/*   Updated: 2023/08/18 14:39:35 by nkorkmaz         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcat(char *dst, const char *src, size_t size)
{
	size_t	i;
	size_t	dlen;

	dlen = 0;
	while (dst[dlen] && dlen < size)
		dlen++;
	i = dlen;
	while (src[dlen - i] && (dlen + 1) < size)
	{
		dst[dlen] = src[dlen - i];
		dlen++;
	}
	if (i < size)
		dst[dlen] = '\0';
	return (i + ft_strlen(src));
}
