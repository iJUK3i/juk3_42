/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: issmith <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/01/23 07:06:04 by issmith           #+#    #+#             */
/*   Updated: 2018/01/26 14:32:37 by issmith          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_header.h"

int		main(int argc, char **input)
{
//	unsigned int x;
	unsigned int z;

//	x = 3;
	if (argc > 1)
	{
		if (input)
		{
			z = swap_bits(ft_atoi(input[1]), 2, 3);
			ft_putnbr(z);
		}
	}
	return (0);
}
