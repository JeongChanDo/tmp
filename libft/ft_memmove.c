/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jdo <jdo@student.42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/03/01 01:13:32 by jdo               #+#    #+#             */
/*   Updated: 2020/04/06 11:11:05 by jdo              ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *dest, const void *src, size_t len)
{
	char	*src_cursor;
	char	*dest_cursor;
	size_t	i;

	if (src == dest)
		return (dest);
	src_cursor = (char *)src;
	dest_cursor = (char *)dest;
	if (src < dest)
	{
		i = len;
		while (i-- > 0)
			dest_cursor[i] = src_cursor[i];
	}
	else
	{
		i = 0;
		while (i < len)
		{
			dest_cursor[i] = src_cursor[i];
			i++;
		}
	}
	return (dest);
}
