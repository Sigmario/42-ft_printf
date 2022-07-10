/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: julmuntz <julmuntz@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/06 13:59:36 by julmuntz          #+#    #+#             */
/*   Updated: 2022/07/10 20:14:32 by julmuntz         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	convert_type(va_list ap, int type)
{
	if (type == 'c')
		convert_char(va_arg(ap, int));
	if (type == 's')
		convert_string(va_arg(ap, char *));
	if (type == 'd')
		convert_decimal(va_arg(ap, int));
	if (type == 'i')
		convert_integer(va_arg(ap, int));
	if (type == 'u')
		convert_unsigned(va_arg(ap, int));
}

int	ft_printf(const char *str, ...)
{
	int		i;
	va_list	ap;
	int		len;

	va_start(ap, str);
	while (str[i])
	{
		if (str[i] == '%')
		{
			len += convert_type(ap, str[i + 1]);
			i++;
		}
		else
			len += ft_putchar(str[i]);
		i++;
	}
	va_end(ap);
	return (len);
}

/*

int	main(void)
{
	char c = 'a';
	char *s = "Hello";
	int d = 4294967295;
	int i = 4294967295;
	int u = 4294967295;
	printf("\nLen: %d\n", ft_printf(
		"\nC: %c\nS: %s\nD: %d\nI: %i\nU: %u\n", c, s, d, i, u));
	puts("\n———————————————");
	printf("\nLen: %d\n", printf(
		"\nC: %c\nS: %s\nD: %d\nI: %i\nU: %u\n", c, s, d, i, u));
	return (0);
}

*/