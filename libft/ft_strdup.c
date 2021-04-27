/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jdo <jdo@student.42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/02/29 12:52:49 by jdo               #+#    #+#             */
/*   Updated: 2020/04/06 11:30:41 by jdo              ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strdup(const char *src)
{
	char	*res;
	char	*cursor;
	int		len;

	len = ft_strlen(src);
	res = (char*)malloc(sizeof(char) * (len + 1));
	if (!res)
		return (0);
	cursor = res;
	while (*src)
	{
		*cursor = *src;
		cursor++;
		src++;
	}
	*cursor = '\0';
	return (res);
}
