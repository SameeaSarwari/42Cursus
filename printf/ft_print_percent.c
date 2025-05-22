/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_percent.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ssarwari <ssarwari@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/06 11:48:56 by ssarwari          #+#    #+#             */
/*   Updated: 2025/05/08 19:16:29 by ssarwari         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_print_percent(void)
{
	write(1, "%", 1);
	return (1);
}

/* 
int main
{
	ft_print_percent();
	ft_print_percent('\n');
	return (0);
} */

/* 
1.- make
2.- (uncoment your main with the tests in ft_printf.c)
3.- cc ft_printf.c libftprintf.a (for compiling)
4.- ./a.out (for exec)
*/
