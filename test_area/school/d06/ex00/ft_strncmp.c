/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: issmith <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/01/16 16:24:12 by issmith           #+#    #+#             */
/*   Updated: 2018/01/16 16:25:53 by issmith          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		ft_strncmp(char *s1, char *s2, unsigned int n)
{
	while (n > 0)
	{
		if (*s1 != *s2)
			return (*s1 < *s2 ? -1 : 1);
		else if (*s1 == '\0')
			return (0);
		s1 = s1 + 1;
		s2 = s2 + 1;
		n = n - 1;
	}
	return (0);
}
