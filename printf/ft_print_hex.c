/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_hex.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ssarwari <ssarwari@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/06 11:48:23 by ssarwari          #+#    #+#             */
/*   Updated: 2025/05/13 13:16:54 by ssarwari         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_print_hex(unsigned int n, char format)
{
	char	*base;
	int		count;

	count = 0;
	if (format == 'x')
		base = "0123456789abcdef";
	else
		base = "0123456789ABCDEF";
	count += ft_putnbr_base(n, base);
	return (count);
}
/* 
int main
{
	unsigned int n = 42;
	ft_print_hex(n, 'x');
	ft_print_hex(n, 'X');
	return (0);
} */
