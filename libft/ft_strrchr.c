/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jdo <jdo@student.42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/02/29 17:34:07 by jdo               #+#    #+#             */
/*   Updated: 2020/04/06 11:31:01 by jdo              ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrchr(const char *str, int ch)
{
	int	len;

	len = ft_strlen((char *)str);
	while (len != 0 && str[len] != (char)ch)
		len--;
	if (str[len] == (char)ch)
		return ((char *)&str[len]);
	return (NULL);
}
