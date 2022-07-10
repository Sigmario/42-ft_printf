/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: julmuntz <julmuntz@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/06 13:59:36 by julmuntz          #+#    #+#             */
/*   Updated: 2022/07/10 18:08:19 by julmuntz         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	convert_type(va_list ap, int type)
{
	if (type == 'c')
		convert_char(va_arg(ap, int));
	if (type == 's')
		convert_str(va_arg(ap, char *));
	if (type == 'd')
		convert_digit(va_arg(ap, int));
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

int	main(int ac, char **av)
{
	char character = 'a';
	char *string = "Bonjour";
	int digit = 117;
	printf("Length:\t\t%d\n", ft_printf(
		"Character:\t%c\nString:\t\t%s\nDigit:\t\t%d\n", character, string, digit));
	puts("");
	printf("Length:\t\t%d\n", printf(
		"Character:\t%c\nString:\t\t%s\nDigit:\t\t%d\n", character, string, digit));
	return (0);
}

*/