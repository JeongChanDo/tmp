/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jdo <jdo@student.42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/03/01 03:07:20 by jdo               #+#    #+#             */
/*   Updated: 2020/04/09 11:39:02 by jdo              ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdlib.h>

int		getdigit(int n)
{
	int digit;

	digit = 1;
	while (n >= 10 || n <= -10)
	{
		n = n / 10;
		digit++;
	}
	return (digit);
}

char	*write_arr(char *res, int len, int isnegative, int n)
{
	int tmp;

	tmp = 0;
	res[len] = 0;
	while (len)
	{
		tmp = n % 10;
		if (tmp < 0)
			tmp = tmp * (-1);
		res[len-- - 1] = tmp + '0';
		n = n / 10;
	}
	if (isnegative == 1)
		res[len] = '-';
	return (res);
}

char	*ft_itoa(int n)
{
	int		isnegative;
	int		len;
	char	*res;

	len = 0;
	isnegative = 0;
	if (n < 0)
	{
		isnegative = 1;
		len = 1;
	}
	len = len + getdigit(n);
	if ((res = (char*)malloc(sizeof(char) * (len + 1))) == NULL)
		return (NULL);
	res = write_arr(res, len, isnegative, n);
	return (res);
}
