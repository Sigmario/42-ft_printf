/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   convert_integer.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: julmuntz <julmuntz@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/10 18:58:31 by julmuntz          #+#    #+#             */
/*   Updated: 2022/07/10 19:03:01 by julmuntz         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	convert_integer(int integer)
{
	int	len;

	len = ft_nbrlen(integer);
	ft_putnbr(integer);
	return (len);
}
