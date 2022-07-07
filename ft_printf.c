/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: julmuntz <julmuntz@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/06 13:59:36 by julmuntz          #+#    #+#             */
/*   Updated: 2022/07/07 20:12:21 by julmuntz         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

void	convert_type(char type)
{
	// if (type == 'c')
	// if (type == 's')
	// if (type == 'p')
	// if (type == 'd')
	// if (type == 'i')
	// if (type == 'u')
	// if (type == 'x')
	// if (type == 'X')
	// if (type == '%')
}

int	ft_printf(const char *str, ...)
{
	int		i;
	va_list	ap;

	va_start(ap, str);
	str = va_arg(ap, char *);
	while (str[i])
	{
		if (str[i] == '%')
			convert_type(str[i + 1]);
	}
	va_end(ap);
	return (0);
}

int	main(int ac, char **av)
{
	int number;
	char a;

	number = 43657;
	a = 'q';
	ft_printf("Atrsd - %d - thbtr\n", number, a);
	return (0);
}