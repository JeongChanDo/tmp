/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jdo <jdo@student.42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/02/29 18:22:44 by jdo               #+#    #+#             */
/*   Updated: 2020/04/06 11:31:42 by jdo              ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(const char *str, const char *find, size_t len)
{
	unsigned int	pose;
	unsigned int	i;

	if (!(*find))
		return ((char*)str);
	pose = 0;
	while (str[pose] != 0 && (size_t)pose < len)
	{
		if (str[pose] == find[0])
		{
			i = 1;
			while (find[i] != 0 &&
				str[pose + i] == find[i] &&
				(size_t)(pose + i) < len)
				++i;
			if (find[i] == 0)
				return ((char*)&str[pose]);
		}
		++pose;
	}
	return (0);
}
