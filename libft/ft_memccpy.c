/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memccpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jdo <jdo@student.42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/02/29 21:00:37 by jdo               #+#    #+#             */
/*   Updated: 2020/04/06 11:12:58 by jdo              ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memccpy(void *dest, const void *src, int ch, size_t len)
{
	size_t			index;
	unsigned char	chr;

	index = 0;
	chr = ch;
	while (index < len)
	{
		if ((((unsigned char *)dest)[index] = ((unsigned char*)src)[index])
			== chr)
			return (dest + index + 1);
		index++;
	}
	return (NULL);
}
