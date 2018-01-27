/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: issmith <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/01/21 20:38:25 by issmith           #+#    #+#             */
/*   Updated: 2018/01/21 22:11:37 by smadnaik         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#define N		9
#include <stdlib.h>
#include <unistd.h>

int		callsudoku(int puzzle[][9]);
void	printsudoku(int puzzle[][9]);

void	custom_atoi(char **input, int array[9][9], int argc)
{
	int nb;
	int i;
	int j;
	int x;

	j = 0;
	nb = 0;
	i = 1;
	x = 0;
	while (x < argc - 1)
	{
		if ((input[i][j] == ' ') || (input[i][j] == '.'))
			array[x][j] = 0;
		if ((input[i][j] >= 49) && (input[i][j] <= 57))
			array[x][j] = nb + ((int)input[i][j] - 48);
		j++;
		if (input[i][j] == '\0')
		{
			x++;
			i++;
			j = 0;
		}
	}
}

void	make_space(int array[9][9])
{
	int i;
	int j;

	i = 0;
	while (i < 9)
	{
		j = 0;
		while (j < 9)
		{
			array[i][j] = (int)malloc(9 * sizeof(int));
			j++;
		}
		i++;
	}
}

int		main(int argc, char **input)
{
	int array[9][9];

	if (argc == 10)
	{
		make_space(array);
		custom_atoi(input, array, argc);
		if (callsudoku(array))
			printsudoku(array);
		else
			write(1, "Error\n", 6);
	}
	else
		write(1, "Error\n", 6);
	return (0);
}
