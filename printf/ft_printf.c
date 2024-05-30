/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: shutan <shutan@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/30 18:50:29 by shutan            #+#    #+#             */
/*   Updated: 2024/05/30 23:10:55 by shutan           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	tran(char spcf, va_list args)
{
	char	c;

	if (spcf == 'c')
	{
		c = va_arg(args, int);
		return (write(1, &c, 1));
	}
	else if (spcf == 's')
		return (print_str(va_arg(args, char *)));
	else if (spcf == 'p')
		return (print_ptr(va_arg(args, unsigned long int)));
	else if (spcf == 'd' || spcf == 'i')
	{
		c = '0' + va_arg(args, int);
		return (write(1, &c, 1));
	}
	else if (spcf == 'u')
		return (print_u(va_arg(args, int)));
	return (0);
}

int	ft_printf(const char *format, ...)
{
	va_list	args;
	int		count;

	va_start(args, format);
	count = 0;
	while (*format)
	{
		if (*format == '%')
		{
			format++;
			count += tran(*format, args);
		}
		else
			count += write(1, format, 1);
		format++;
	}
	va_end(args);
	return (count);
}

int	main(void)
{
	char	str[] = ", world!";
	char	*ptr;
	
	ptr = str;
	ft_printf("Below are written by ft_printf:\n");
	ft_printf("hallo%c\n", 'a');
	ft_printf("hallo%s\n", str);
	ft_printf("The address is %p\n", ptr);
	ft_printf("print number %d\n", 4);
	ft_printf("print number %u\n", -4);	
	printf("Below are written by printf:\n");
	printf("hallo%c\n", 'a');
	printf("hallo%s\n", str);
	printf("The address is %p", ptr);
	return (0);
}