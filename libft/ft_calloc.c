/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jdo <jdo@student.42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/03/01 02:15:00 by jdo               #+#    #+#             */
/*   Updated: 2020/04/06 10:59:15 by jdo              ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_calloc(size_t count, size_t size)
{
	unsigned int	total;
	unsigned int	i;
	char			*dest;

	total = count * size;
	if (!(dest = malloc(total)))
		return (NULL);
	i = 0;
	while (total--)
	{
		dest[i] = 0;
		i++;
	}
	return ((char *)dest);
}
