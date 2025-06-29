/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_nbr.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ssarwari <ssarwari@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/06 11:46:53 by ssarwari          #+#    #+#             */
/*   Updated: 2025/05/08 19:16:20 by ssarwari         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_print_nbr(int n)
{
	int	count;

	count = 0;
	if (n == -2147483648)
		return (write(1, "-2147483648", 11));
	if (n < 0)
	{
		count += write(1, "-", 1);
		n = -n;
	}
	if (n >= 10)
		count += ft_print_nbr(n / 10);
	count += ft_print_char((n % 10) + '0');
	return (count);
}

/* 
int main(void)
{
	ft_print_nbr(42);
	ft_print_nbr(-42);
	ft_print_nbr(0);
	ft_print_nbr(-2147483648);
	return(0);
} */
