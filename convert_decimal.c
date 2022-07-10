/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   convert_decimal.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: julmuntz <julmuntz@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/10 15:19:36 by julmuntz          #+#    #+#             */
/*   Updated: 2022/07/10 19:44:07 by julmuntz         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	convert_decimal(int decimal)
{
	int	len;

	len = ft_nbrlen(decimal);
	ft_putnbr(decimal);
	return (len);
}
