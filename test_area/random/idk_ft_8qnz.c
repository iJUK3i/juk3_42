/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_eight_queens_puzzle.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: issmith <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/01/13 16:38:04 by issmith           #+#    #+#             */
/*   Updated: 2018/01/13 18:00:10 by issmith          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	ft_putstr(char *str)
{
	while (*str)
	{
		write(1, str, 1);
		str++;
	}
}

void	ft_putnbr(int nb)
{
	if (nb < 0)
	{
		ft_putchar('-');
		ft_putnbr(nb * -1);
	}
	else if (nb > 9)
	{
		ft_putnbr(nb / 10);
		ft_putnbr(nb % 10);
	}
	else
		ft_putchar(nb + '0');
}

int x = 0; // global variable



void	ft_print_matrix(int board[8][8])
{
	int i;
	int j;

	i = 0;
	while (i < 8)
	{
		while (j < 8)
		{
			ft_putchar(board[i][j]);
			ft_putchar(' ');
			j++;
		}
		i++;
		ft_putchar('\n');
	}
}

int		ft_is_marked(int board[8][8], int i)
{
	int j;

	j = 0;
	while (j < 8)
	{
		if (board[i][j] == 'Q')
			return (j);
		j++;
	}
	return (-1);
}

int		ft_abs(int nb)
{
	if (nb < 0)
		nb = nb * -1;
	return (nb);
}

int		check(int board[8][8], int row, int col)
{
	int be_row;
	int be_col;

	be_row = 0;
	while (be_row < 8)
	{
		be_col = ft_is_marked(board, be_row);
		if (be_col == -1)
			return (1);
		if (col == be_col || ft_abs(row - be_row) == ft_abs(col - be_col))
			return (0);
		be_row++;
	}
	return (1);
}

int		ft_array()
{
	int board[8][8];
	int i;
	int j;

	i = 0;
	while (i < 8)
	{
		j = 0;
		while (j < 8)
		{
			board[i][j] = '.';
			j++;
		}
		i++;
	}
	return (board, i);
}

void	ft_eight_queens_puzzle()
{
	int board[8][8];
	int j;
	int i;

	i = 0;
	while (i < 8)
	{
		j = 0;
		while (j < 8)
		{
			board[i][j] = NULL;
			j++;
		}
		i++;
	}

	j = 0;
	if (i < 8)
	{
		while (j < 8)
		{
			if (check(board, i, j) != 0)
			{
				board[i][j] = 'Q';
				ft_eight_queens_puzzle(board, i + 1);
				board[i][j] = '.';
			}
			j++;
		}
	}
	else
	{
		x++;
		ft_putstr(" valid solution ");
		ft_putnbr(x);
		ft_putstr("\n");
		ft_print_matrix(board);
	}
}

int		main()
{
	ft_eight_queens_puzzle();
	return (0);
}








