/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_put_hex.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: woberon <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/19 17:23:31 by woberon           #+#    #+#             */
/*   Updated: 2021/12/19 17:23:33 by woberon          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

static char	translate(unsigned int num, int flag)
{
	if (num < 10)
		return ('0' + num);
	else if (num == 10)
		return ('A' + flag);
	else if (num == 11)
		return ('B' + flag);
	else if (num == 12)
		return ('C' + flag);
	else if (num == 13)
		return ('D' + flag);
	else if (num == 14)
		return ('E' + flag);
	else
		return ('F' + flag);
}

static void	write_number(unsigned int num, int *sum, int flag)
{
	char	s;

	if (num == 0)
		return ;
	else
	{
		write_number(num / 16, sum, flag);
		s = translate(num % 16, flag);
		*sum += write(1, &s, 1);
	}
}

void	ft_put_hexadecimal(unsigned int num, int *sum, char c)
{
	int					flag;

	if (c == 'x')
		flag = 32;
	else
		flag = 0;
	if (num == 0)
		*sum += write(1, "0", 1);
	else
		write_number(num, sum, flag);
}
