/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_alphabet.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: issmith <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/01/10 14:03:39 by issmith           #+#    #+#             */
/*   Updated: 2018/01/10 19:51:58 by issmith          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <unistd.h>
void	ft_print_alphabet(void);






void	ft_putchar(char c)
{
	write(1, &c, 1);
}



void	ft_print_alphabet(void)
{
	char name;

	name  = 97;
	while (name <= 122)
	{
		write(1, &name, 1);
		name = name + 1;
	}
//	write(1, "\n", 1);
}
int main()
{
	ft_print_alphabet();
	return 0;
}
