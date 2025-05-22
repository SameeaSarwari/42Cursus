/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_ptr.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ssarwari <ssarwari@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/06 11:46:00 by ssarwari          #+#    #+#             */
/*   Updated: 2025/05/13 13:21:46 by ssarwari         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

static int	ft_putptr_hex(unsigned long n)
{
	char	*hex;
	char	c;
	int		count;

	count = 0;
	hex = "0123456789abcdef";
	if (n >= 16)
		count += ft_putptr_hex(n / 16);
	c = hex[n % 16];
	count += write(1, &c, 1);
	return (count);
}

int	ft_print_ptr(void *ptr)
{
	unsigned long	n;
	int				count;

	if (ptr == NULL)
		return (write (1, "(nil)", 5));
	n = (unsigned long)ptr;
	count = write (1, "0x", 2);
	count += ft_putptr_hex(n);
	return (count);
}
// this fucntion takes a pointer as input
// and prints the address of the pointer 
// in hexadecimal format
/* 
int main 
{
	int a = 42;
	int *ptr = &a;
	ft_print_ptr(ptr);
	ft_print_ptr(NULL);
	return 0;
} */
