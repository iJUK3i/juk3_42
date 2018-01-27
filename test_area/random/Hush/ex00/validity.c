/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   validity.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: smadnaik <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/01/20 23:29:46 by smadnaik          #+#    #+#             */
/*   Updated: 2018/01/21 22:12:15 by smadnaik         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		getblock(int currposition)
{
	return (3 * (currposition / 3));
}

int		get2nd(int currposition)
{
	return ((currposition + 2) % 3);
}

int		get3rd(int currposition)
{
	return ((currposition + 4) % 3);
}

int		isvalid(int num, int puzzle[][9], int row, int col)
{
	int i;
	int blockrow;
	int blockcol;

	i = 0;
	blockrow = getblock(row);
	blockcol = getblock(col);
	while (i < 9)
	{
		if (puzzle[i][col] == num)
			return (0);
		if (puzzle[row][i] == num)
			return (0);
		i++;
	}
	if (puzzle[get2nd(row) + blockrow][get2nd(col) + blockcol] == num)
		return (0);
	if (puzzle[get3rd(row) + blockrow][get2nd(col) + blockcol] == num)
		return (0);
	if (puzzle[get2nd(row) + blockrow][get3rd(col) + blockcol] == num)
		return (0);
	if (puzzle[get3rd(row) + blockrow][get3rd(col) + blockcol] == num)
		return (0);
	return (1);
}
