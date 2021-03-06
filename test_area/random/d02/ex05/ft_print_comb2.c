/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_comb2.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: issmith <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/01/10 20:11:37 by issmith           #+#    #+#             */
/*   Updated: 2018/01/11 00:27:09 by issmith          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_print_comb2(void);

void	ft_help_comb(char *nbrs)
{
	ft_putchar(nbrs[0] + 48);
	ft_putchar(nbrs[1] + 48);
	ft_putchar(' ');
	ft_putchar(nbrs[2] + 48);
	ft_putchar(nbrs[3] + 48);
}

void	ft_print_comb2(void)
{
	int		i;
	char	nbrs[4] = {0, 0, 0, 1};

	while (!((nbrs[0] == 9) && (nbrs[1] == 9)))
	{
		ft_help_comb(nbrs);
		if (!((nbrs[0] == 9) && (nbrs[1] == 8)))
			ft_putchar(',');
		if (!((nbrs[0] == 9) && (nbrs[1] == 8)))
			ft_putchar(' ');
		nbrs[3]++;
		if ((nbrs[3] = nbrs[3] % 10) == 0)
			nbrs[2] = (nbrs[2] + 1);
		if (nbrs[2] == 10)
		{
			nbrs[2] = nbrs[0];
			nbrs[1]++;
			if ((nbrs[1] = nbrs[1] % 10) == 0)
				nbrs[0]++;
			nbrs[3] = nbrs[1] + 1;
		}
	}
}
