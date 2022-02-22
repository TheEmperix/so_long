/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_put_addr.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: woberon <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/19 17:23:12 by woberon           #+#    #+#             */
/*   Updated: 2021/12/19 17:23:14 by woberon          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

static char	translate_p(unsigned int num)
{
	if (num < 10)
		return ('0' + num);
	else if (num == 10)
		return ('a');
	else if (num == 11)
		return ('b');
	else if (num == 12)
		return ('c');
	else if (num == 13)
		return ('d');
	else if (num == 14)
		return ('e');
	else
		return ('f');
}

static void	write_number_p(unsigned long num, int *sum)
{
	char	s;

	if (num == 0)
		return ;
	else
	{
		write_number_p(num / 16, sum);
		s = translate_p(num % 16);
		*sum += write(1, &s, 1);
	}
}

void	ft_put_address(unsigned long num, int *sum)
{
	*sum += write(1, "0x", 2);
	if (num == 0)
		*sum += write(1, "0", 1);
	else
		write_number_p(num, sum);
}
