/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_freecpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mirivera <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/19 21:25:03 by mirivera          #+#    #+#             */
/*   Updated: 2019/10/19 21:25:52 by mirivera         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char		*ft_freecpy(char *str, char *tmp)
{
	free(tmp);
	ft_bzero(tmp, ft_strlen(tmp));
	tmp = ft_strjoin(tmp, str);
	free(str);
	return (tmp);
}
