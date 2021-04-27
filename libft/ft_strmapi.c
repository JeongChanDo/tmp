/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmapi.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jdo <jdo@student.42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/03/08 16:33:41 by jdo               #+#    #+#             */
/*   Updated: 2020/04/06 11:29:58 by jdo              ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strmapi(char const *s, char (*f)(unsigned int, char))
{
	int		len;
	int		idx;
	char	*res;

	if (s == NULL || f == NULL)
		return (NULL);
	idx = 0;
	len = ft_strlen(s);
	if ((res = (char*)malloc(len + 1)) == NULL)
		return (NULL);
	while (idx < len)
	{
		res[idx] = f(idx, s[idx]);
		idx++;
	}
	res[idx] = 0;
	return (res);
}
