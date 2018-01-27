/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   print.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: smadnaik <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/01/20 23:25:14 by smadnaik          #+#    #+#             */
/*   Updated: 2018/01/21 21:10:01 by issmith          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdio.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	write_nbr(int nb)
{
	ft_putchar(nb + '0');
}

void	printsudoku(int puzzle[][9])
{
	int i;
	int j;

	i = 0;
	j = 0;
	while (i < 9)
	{
		while (j < 9)
		{
			if (8 == j)
			{
//				printf("%d\n", puzzle[i][j]);
				ft_putchar(' ');
				write_nbr(puzzle[i][j]);
				ft_putchar('\n');
			}
			else
//				printf("%d ", puzzle[i][j]);
				ft_putchar(' ');
				write_nbr(puzzle[i][j]);
			j++;
		}
		j = 0;
		i++;
	}
}
