/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: issmith <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/01/16 23:23:27 by issmith           #+#    #+#             */
/*   Updated: 2018/01/17 01:02:16 by issmith          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "juk3.h"

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	ft_putnbr(int nb)
{
	if (nb == -2147483648)
		ft_putstr("-2147483648");
	else
	{
		if (nb < 0)
		{
			ft_putchar('-');
			nb *= -1;
		}
		if (nb > 9)
			ft_putnbr(nb / 10);
		ft_putchar((nb % 10) + '0');
	}
}

int		eval_expr(char *str)
{
	unsigned int x;
	char *y;

	x = 3 + 42 * (1 - 2 / (3 + 4) - 1 % 21) + 1;
	y = str;

	return (x);
}

int main(int ac, char **av)
{
	if (ac > 1)
	{
		ft_putnbr(eval_expr(av[1]));
		ft_putchar('\n');
	}
	return (0);
}
