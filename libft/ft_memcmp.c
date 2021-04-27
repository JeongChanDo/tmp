/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jdo <jdo@student.42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/03/01 01:22:16 by jdo               #+#    #+#             */
/*   Updated: 2020/04/06 11:10:56 by jdo              ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int		ft_memcmp(const void *str1, const void *str2, size_t len)
{
	unsigned int	cnt;
	unsigned char	*str1_cursor;
	unsigned char	*str2_cursor;

	cnt = 0;
	str1_cursor = (unsigned char*)str1;
	str2_cursor = (unsigned char*)str2;
	while (len-- > 0)
	{
		if (str1_cursor[cnt] != str2_cursor[cnt])
			return ((str1_cursor[cnt] - str2_cursor[cnt]));
		cnt++;
	}
	return (0);
}
