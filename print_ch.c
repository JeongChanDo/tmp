/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   print_ch.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jdo <jdo@student.42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/26 21:33:43 by jdo               #+#    #+#             */
/*   Updated: 2021/04/26 22:04:28 by jdo              ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	put_width(int width, int len, int zero)
{
	int ret;

	ret = 0;
	while (len < width)
	{
		if (zero == 1)
			ft_putchar('0');
		else
			ft_putchar(' ');
		len++;
		ret++;
	}
	return (ret);
}

int	print_ch(int c, t_info *info)
{
	int	ret;

	ret = 0;
	if (info->type == '%' && info->minus == 1)
		info->zero = 0;
	if (info->minus == 1)
		ret += ft_putchar(c);
	ret += put_width(info->width, 1, info->zero);
	if (info->minus == 0)
		ret += ft_putchar(c);
	return (ret);
}
