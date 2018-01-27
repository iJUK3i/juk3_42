/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: issmith <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/01/17 17:19:13 by issmith           #+#    #+#             */
/*   Updated: 2018/01/18 00:29:47 by issmith          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include	<stdlib.h>
#include	<unistd.h>
#define		BUF_S	24576

void	ft_putstr(char *str)
{
	while (*str)
	{
		write(1, str, 1);
		str++;
	}
}

char *ft_strcpy(int i, char *dest, char *src)
{
	int		j;

	i = 0;
	while(src[i++])
		;
	dest = (char*)malloc(1000000);
	if (dest)
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
		return(NULL);
	}
}
	
char	*ft_strdup(char *src)
{
	int		i;
		char	*string;

	i = 0;
	while (src[i++])
		;
	string = (char *) malloc(i * sizeof(char));
	if (!(string))
	{
		ft_putstr("\nerror");
		return (NULL);
	}
	else if (string)
	{
		string = ft_strcpy(i, string, src);
		return (string);
	}
	else
	{
		return (0);
	}
}
int		main()
{
	char *str2;

	str2 = ft_strdup("string of text");
	ft_putstr("\n");
	ft_putstr(str2);
	ft_putstr("\n");
	return (0);
}

