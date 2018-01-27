/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: issmith <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/01/17 17:19:13 by issmith           #+#    #+#             */
/*   Updated: 2018/01/17 21:53:20 by issmith          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include	<stdlib.h>
#include	<unistd.h>
#define		BUF_S	24576

void	ft_putstr(char *str)
{
	while (*str)
		write(1, str++, 1);
}

char *ft_strcpy(char *dest, char *src)
{
	int		i;
	int		j;
	
	while(src[i++])
	dest = (char*)malloc(1000000);
	if (dest != NULL)
	{
		j = 0;
		while (j < i)
		{
			dest[j] = src[j];
			j++;
		}
		dest[j] = '\0';
		return (dest);
	}

	else
	{
		return("error");
	}
}
	
char	*ft_strdup(char *src)
{
	int		i;
	char	*str;

	while (src[i++])
		;
	str = (char *) malloc(i / 2 * sizeof(char));
	if (str == 0)
		return (NULL);
	else if (str > 0)
	{
		str = ft_strcpy(str, src);
		return (str);
	}
	else
		return (0);
}
int		main()
{
	char *str2;

	str2 = ft_strdup("string of text");
	ft_putstr("\n");
	ft_putstr(str2);
	ft_putstr("\n");
	return 0;
}

