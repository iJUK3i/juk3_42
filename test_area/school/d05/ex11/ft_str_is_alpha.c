/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_alpha.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: issmith <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/01/16 16:39:56 by issmith           #+#    #+#             */
/*   Updated: 2018/01/16 16:42:30 by issmith          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		ft_str_is_alpha(char *str)
{
	int i;

	i = 0;
	if (*str == '\0')
		return (1);
	while (str[i] != '\0')
	{
		if (!((str[i] >= 'A' && str[i] <= 'Z') ||
					(str[i] >= 'a' && str[i] <= 'z')))
			return (0);
		i = i + 1;
	}
	return (1);
}
