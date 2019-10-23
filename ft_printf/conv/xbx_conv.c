/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   xbx_conv.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mirivera <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/09/02 22:43:24 by mirivera          #+#    #+#             */
/*   Updated: 2019/10/23 00:11:42 by mirivera         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../headers/ft_printf.h"

void		x_cast(va_list args, unsigned int *n)
{
	if (CHECK_BIT(arg.flgmods, LONGINT))
		(*n) = va_arg(args, long int);
	else if (CHECK_BIT(arg.flgmods, LNGLNG))
		(*n) = va_arg(args, long long int);
	else
		(*n) = va_arg(args, unsigned int);
}

void	xbx_conv(va_list args)
{
	char				*res;
	char				*temp;
	unsigned int 			n;

	res = NULL;
	x_cast(args, &n);
	if (n == 0)
	{
		temp = "0";
		res = ft_strnew(1);
		res = ft_strcpy(res, temp);
		xbx_form(res);
	}
	else if (arg.conv == 'X')
	{
		temp = ft_uitoa_base_up(n, res, 16, 0);
		xbx_form(temp);
		free(res);
	}
	else
	{
		temp = ft_uitoa_base(n, res, 16, 0);
		xbx_form(temp);
	}
}
