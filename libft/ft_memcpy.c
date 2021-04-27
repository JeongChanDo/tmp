/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jdo <jdo@student.42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/02/29 20:55:38 by jdo               #+#    #+#             */
/*   Updated: 2020/04/06 11:14:53 by jdo              ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memcpy(void *dest, const void *src, size_t len)
{
	unsigned char *dest_cursor;
	unsigned char *src_cursor;

	dest_cursor = (unsigned char *)dest;
	src_cursor = (unsigned char *)src;
	if (!len || dest == src)
		return (dest);
	while (len--)
		*dest_cursor++ = *src_cursor++;
	return (dest);
}
