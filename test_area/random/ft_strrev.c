/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrev.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: issmith <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/01/12 04:20:32 by issmith           #+#    #+#             */
/*   Updated: 2018/01/12 09:35:07 by issmith          ###   ########.fr       */
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

char	*ft_strrev(char *str)
{
	int		i;
	int		j;
	char	temp;

	j = 0;
	while (str[j] != '\0')
		j++;
	i = -1;
	while (++i < --j)
	{
		temp = str[i];
		str[i] = str[j];
		str[j] = temp;
	}
	return (str);
}

int main()
{
	char *a;

	a = ft_strrev("going ham");
	ft_putchar('\n');
	ft_putstr(a);
	ft_putchar('\n');
	return 0;
}
