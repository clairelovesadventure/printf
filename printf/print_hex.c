/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   print_hex.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: shutan <shutan@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/30 22:18:17 by shutan            #+#    #+#             */
/*   Updated: 2024/05/30 22:45:51 by shutan           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	print_hex(unsigned long int pa)
{
	int		digit;
	char	hex[17];

	digit = 1;
	ft_strcpy(hex, "0123456789abcdef");
	if (pa >= 16)
	{
		digit++;
		print_hex(pa / 16);
	}
	write(1, &hex[pa % 16], 1);
	return (digit);
}
