/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jdo <jdo@student.42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/02/29 17:16:10 by jdo               #+#    #+#             */
/*   Updated: 2020/04/06 11:30:11 by jdo              ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strchr(const char *str, int ch)
{
	char	*cursor;

	cursor = (char *)str;
	while (*cursor != ch)
	{
		if (!(*cursor))
			return (NULL);
		cursor++;
	}
	return (cursor);
}
