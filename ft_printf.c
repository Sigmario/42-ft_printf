/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: julmuntz <julmuntz@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/06 13:59:36 by julmuntz          #+#    #+#             */
/*   Updated: 2022/07/07 15:05:28 by julmuntz         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_printf(const char *format, ...)
{
	va_list	ap;
	va_start(ap, format);
	char	*str;

	str = va_arg(ap, char *);
	while (str)
	{
		ft_putstr(str);
		str = va_arg(ap, char *);
	}
	va_end(ap);
	return (0);
}

int	main(int ac, char **av)
{
	ft_printf("Atrsdthbtr\n", "Bikyfutd6rye\n", "Ckhjgyfhtdg\n", "Djhcgnxfds\n", "Erhsjgafv8ps\n");
	return (0);
}