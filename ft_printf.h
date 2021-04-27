/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jdo <jdo@student.42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/26 13:23:58 by jdo               #+#    #+#             */
/*   Updated: 2021/04/27 21:51:02 by jdo              ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_PRINTF_H
# define FT_PRINTF_H

# include <stdarg.h>
# include <unistd.h>
# include <stdlib.h>
# include "./libft/libft.h"
# include <stdio.h>

# define TYPE "csdiupxX%"

typedef struct	s_info
{
	int		minus;
	int		zero;
	int		width;
	int		prec;
	char	type;
	int		nbr_base;
	int		nbr_sign;
}				t_info;

int				ft_printf(const char *format, ...);
int				parse_format(va_list ap, char *format);
void			check_info(va_list ap, char *format, t_info *info, int i);
void			check_width_and_prec(va_list ap,
		char *format, t_info *info, int i);
int				print_type(va_list ap, t_info *info);

int				print_ch(int c, t_info *info);
int				put_width(int width, int len, int zero);
int				print_str(char *str, t_info *info);
char			*parse_buf(char *str, int end, int len);
int				put_width_str(char **buf, t_info *info);
int				print_nbr(unsigned long long nbr, t_info *info);
int				put_prec_str(unsigned long long nbr, t_info *info, char **buf);
int				put_minus(t_info *info, char **buf);
int				put_minus2(int buf_len, t_info *info, char **buf);
int				put_pointer_prefix(char **buf);

void			init_info(t_info *info);
int				ft_nbrlen(unsigned long long nbr, t_info *info);
char			*ft_baseset(char type);

#endif
