/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: shutan <shutan@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/26 01:32:53 by shutan            #+#    #+#             */
/*   Updated: 2024/05/26 02:17:42 by shutan           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <unistd.h>
#include <stdlib.h>

size_t	ft_strlen(const char *str)
{
	size_t	i;

	i = 0;
	while (str[i] != '\0')
	{
		i++;
	}
	return (i);
}

int	ft_printf(const char *str, void *p)
{
	char	*tmp;

	tmp = p;
	while (*str && *str != %)
	{
		write(1, str, 1);
		str++;
	}
	str = (char *)malloc(ft_strlen(p) + 1);
	while (*str == '%' && *(str + 1) == s)
	{
		(char *)*str = *tmp;
		str++ = tmp++;
	}
	(char *)*str = '\0';
	while (*str && *str != '%')
	{
		write(1, str, 1);
		str++;
	}
	return (0);
}

int	main(void)
{
/* 	ft_printf(); */
	printf("Hallo, %s", "World!");
	return (0);
}