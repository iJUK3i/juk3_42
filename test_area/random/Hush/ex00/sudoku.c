/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rush01.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: smadnaik <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/01/20 23:05:54 by smadnaik          #+#    #+#             */
/*   Updated: 2018/01/21 22:12:07 by smadnaik         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		isvalid(int number, int puzzle[][9], int row, int column);
int		solvesudoku(int puzzle[][9], int row, int column);

int		solvesudoku(int puzzle[][9], int row, int column)
{
	int nextnum;

	nextnum = 0;
	if (row == 9)
		return (1);
	if (puzzle[row][column])
	{
		if (column == 8)
			return (solvesudoku(puzzle, row + 1, 0));
		else
			return (solvesudoku(puzzle, row, column + 1));
	}
	while (++nextnum < 10)
	{
		if (isvalid(nextnum, puzzle, row, column))
		{
			puzzle[row][column] = nextnum;
			if (column == 8 && (solvesudoku(puzzle, row + 1, 0)))
				return (1);
			else if (solvesudoku(puzzle, row, column + 1))
				return (1);
			puzzle[row][column] = 0;
		}
	}
	return (0);
}

int		callsudoku(int puzzle[][9])
{
	return (solvesudoku(puzzle, 0, 0));
}
