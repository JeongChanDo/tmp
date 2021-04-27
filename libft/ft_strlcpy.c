/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jdo <jdo@student.42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/02/29 17:08:45 by jdo               #+#    #+#             */
/*   Updated: 2020/04/06 11:30:29 by jdo              ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcpy(char *dest, const char *src, size_t size)
{
	int		cnt;
	size_t	res;

	cnt = 0;
	res = ft_strlen(src);
	while (src[cnt] != 0 && cnt < ((int)size - 1))
	{
		dest[cnt] = src[cnt];
		++cnt;
	}
	if (size)
		dest[cnt] = 0;
	return (res);
}
