/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_uitoa_base_up.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mirivera <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/22 23:59:22 by mirivera          #+#    #+#             */
/*   Updated: 2019/10/23 00:00:14 by mirivera         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char		*ft_uitoa_base_up(uint64_t num, char *str, int base, int i)
{
	uint64_t	rem;
	int			sign;
	uint64_t	temp;
	int			length;

	temp = num;
	sign = 1;
	length = 1;
	while (temp /= base)
		length++;
	str = ft_strnew(length);
	while (num != 0)
	{
		rem = (num % base);
		str[i++] = (rem > 9) ? (rem - 10) + 'A' : rem + '0';
		num = (num / base);
	}
	str[i] = '\0';
	return (ft_strrev(str));
}
