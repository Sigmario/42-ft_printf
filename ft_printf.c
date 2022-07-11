/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: julmuntz <julmuntz@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/06 13:59:36 by julmuntz          #+#    #+#             */
/*   Updated: 2022/07/11 20:30:26 by julmuntz         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	convert_type(va_list ap, int type)
{
	if (type == 'c')
		return (convert_char(va_arg(ap, int)));
	if (type == 's')
		return (convert_string(va_arg(ap, char *)));
	if (type == 'p')
		return (convert_hex_pointer(va_arg(ap, unsigned long int)));
	if (type == 'd')
		return (convert_decimal(va_arg(ap, int)));
	if (type == 'i')
		return (convert_integer(va_arg(ap, int)));
	if (type == 'u')
		return (convert_unsigned(va_arg(ap, int)));
	if (type == 'x')
		return (convert_hex_lower(va_arg(ap, int)));
	if (type == 'X')
		return (convert_hex_upper(va_arg(ap, int)));
	return (0);
}

int	ft_printf(const char *str, ...)
{
	int		i;
	va_list	ap;
	int		len;

	i = 0;
	va_start(ap, str);
	len = 0;
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
	char *p = s;
	int d = 4294967295;
	int i = 4294967295;
	int u = 4294967295;
	int x = 17656;
	int X = 17656;
	printf("\nLen: %d\n", ft_printf("\n\
c: %c\n\
s: %s\n\
p: %p\n\
d: %d\n\
i: %i\n\
u: %u\n\
x: %x\n\
X: %X\n", c, s, p, d, i, u, x, X));
	puts("\n———————————————");
	printf("\nLen: %d\n", printf("\n\
c: %c\n\
s: %s\n\
p: %p\n\
d: %d\n\
i: %i\n\
u: %u\n\
x: %x\n\
X: %X\n", c, s, p, d, i, u, x, X));
	return (0);
}

*/