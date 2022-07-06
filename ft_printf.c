/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: julmuntz <julmuntz@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/06 13:59:36 by julmuntz          #+#    #+#             */
/*   Updated: 2022/07/06 21:03:41 by julmuntz         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"
// int	ft_printf(const char *format, ...)
int	ft_printf(const char *format, ...)
{
	va_list ap;
	char *str;
	va_start(ap, format);

	str = va_arg(ap, char*);

	printf("%s", str);
	return(0);
}

// int main(int ac, char **av)
// {
// 	ft_printf();
// 	return(0);
// }