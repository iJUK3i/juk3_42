/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: issmith <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   heighteated: 2018/01/09 19:32:28 by issmith           #+#    #+#             */
/*   Updated: 2018/01/13 12:06:41 by issmith          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "juk3.h"
#include <stdio.h>
#define KGRN  "\x1B[32m"
#define KRED  "\x1B[31m"
#define KNRM  "\x1B[0m"
#define KBLU  "\x1B[34m"

void ft_rush(int width, int height, int x, int y)
{
	if (height == 0 && width == 0)
		ft_putchar('/');
	else if ((height == 0 && width == x - 1) || (height == y - 1 && width == 0))
		ft_putchar('\\');
	else if (height == y - 1 && width == x - 1)	
		ft_putchar('/');
	else if (((height == 0) || (height == y - 1)) || ((width == 0) || (width == x - 1)))
		ft_putchar('*');
	else
		ft_putchar(' ');
}
int rush(int x, int y)
{
	int width;
	int height;
	int row;
	int column;

	row = x;
	column = y;
	width = 0;
	height = 0;
	if (row > 0 && column > 0)
	{
		while (height < column)
		{
			while (width < row)
			{
				ft_rush(width, height, row, column);
				width++;
			}
			ft_putchar('\n');
			width = 0;
			height++;
		}
	}
	return 1;
}


int main(int nb_arg, char **input)
{
	int a;
	int b;
	int i;
	
	ft_putnbr(nb_arg);
	ft_putchar('\n');

	i = 0;
	while (i < nb_arg)
	{
		ft_putstr("input[");
		ft_putnbr(i);
		ft_putstr("] = ");
		ft_putstr(input[i]);
		ft_putchar('\n');
		i++;
	}
	a = ft_atoi(input[1]);
	ft_putchar('\n');

	if (nb_arg > 1 && nb_arg <= 3)
	{
		b = ft_atoi(input[2]);
		if (nb_arg == 2)
		{	
			b = 1;
		}
		if (rush(a, b) > 0)
		{
			ft_putchar('\n');
			ft_putstr(" function test: ");
			printf("%sPASS!\n", KBLU);
			printf("%s\n",KNRM);
		}
	}
		else
		{
			ft_putchar('\n');
			ft_putstr(" function test: ");
			printf("%sFAIL!\n", KRED);
			printf("%s\n",KNRM);
		}
	/*	if (input[3] == 'y')
	{
		ft_putchar('\n');
		ft_putstr(" function test: ");
		printf("%sColorMode: Activated\n", KRED);
		printf("%s\n",KNRM);
	}
*/	return (0);
}
