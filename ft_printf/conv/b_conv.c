/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   b_conv.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mirivera <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/06 15:27:45 by mirivera          #+#    #+#             */
/*   Updated: 2019/10/06 17:10:44 by mirivera         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../headers/ft_printf.h"

void	b_conv(va_list args)
{
	char		*res;

	res = va_arg(args, char *);
	if (arg.conv == 'b')
		ft_strtobinary(res);
}
