/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   print_ptr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: shutan <shutan@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/30 19:51:26 by shutan            #+#    #+#             */
/*   Updated: 2024/05/30 22:40:15 by shutan           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	print_hex(unsigned long int pa);

int	print_ptr(unsigned long int pa)
{
	write (1, "0x", 2);
	return (print_hex(pa) + 2);
}

// int	main(void)
// {
// 	int	*a;
// 	int	A;
// 	A = 33;
// 	a = &A;
// 	printf("\n%d", putptr((unsigned long)a));
// 	printf("\n%p", a);
// 	return (0);
// }