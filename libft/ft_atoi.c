/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jdo <jdo@student.42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/02/29 18:27:55 by jdo               #+#    #+#             */
/*   Updated: 2020/04/06 21:23:43 by jdo              ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		ft_atoi(const char *str)
{
	int		res;
	int		negative;

	res = 0;
	negative = 1;
	while (*str &&
		(*str == ' ' || *str == '\n' || *str == '\t' ||
		*str == '\v' || *str == '\f' || *str == '\r'))
		++str;
	if (*str == '-')
		negative = -1;
	if (*str == '-' || *str == '+')
		++str;
	while (*str && *str >= '0' && *str <= '9')
	{
		if ((negative == -1) && (res >= 214748364) && (*str - 48 >= 9))
			return (0);
		if ((res >= 214748364) && (*str - 48 > 8))
			return (-1);
		res = res * 10 + (*str - 48);
		++str;
	}
	return (res * negative);
}
