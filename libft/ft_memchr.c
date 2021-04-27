/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jdo <jdo@student.42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/03/01 01:18:07 by jdo               #+#    #+#             */
/*   Updated: 2020/04/06 11:10:52 by jdo              ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memchr(const void *str, int ch, size_t len)
{
	unsigned char	*str_cursor;
	unsigned char	chraracter;
	size_t			i;

	str_cursor = (unsigned char *)str;
	chraracter = (unsigned char)ch;
	i = 0;
	while (i < len)
	{
		if (*str_cursor == chraracter)
			return (str_cursor);
		str_cursor++;
		i++;
	}
	return (NULL);
}
