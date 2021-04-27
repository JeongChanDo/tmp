/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jdo <jdo@student.42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/03/05 12:36:27 by jdo               #+#    #+#             */
/*   Updated: 2021/04/27 22:38:45 by jdo              ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	char		*res;
	const char	*s_cursor;
	char		*cursor;

	if (s == NULL)
		return (NULL);
	if ((res = (char *)malloc(sizeof(char) * (len + 1))) == NULL)
		return (NULL);
	cursor = res;
	if (!(ft_strlen(s) < start))
	{
		s_cursor = &s[start];
		while (len-- && *s_cursor != 0)
		{
			*cursor = *s_cursor;
			s_cursor++;
			cursor++;
		}
	}
	*cursor = 0;
	return (res);
}
