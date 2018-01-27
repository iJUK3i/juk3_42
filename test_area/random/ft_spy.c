/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_spy.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: issmith <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/01/19 16:03:26 by issmith           #+#    #+#             */
/*   Updated: 2018/01/19 16:46:17 by issmith          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdlib.h>

int		ft_is_space(char c)
{
	return (c == ' ' || c == '\n' || c == '\t');
}

int		ft_find_next(char *str, int i)
{
	while (ft_is_space(str[i]) && str[i] != '\0')
		i += 1;
	return (i);
}

int		ft_count(char *str)
{
	int	i;
	int	words;

	i = 0;
	words = 0;
	while (str[i] != '\0')
	{
		i = ft_find_next(str, i);
		words = str[i] != '\0' ? words + 1 : words;
		while (!ft_is_space(str[i]) && str[i] != '\0')
			i += 1;
	}
	return (words);
}

int		ft_length(char *str, int i)
{
	int j;

	j = i;
	while (!ft_is_space(str[j]) && str[j] != '\0')
		j += 1;
	return ((j - i) + 1);
}

char	**ft_split_whitespaces(char *str)
{
	char	**words;
	int		i;
	int		j;
	int		k;

	i = 0;
	j = 0;
	k = 0;
	if (!str)
		return (0);
	words = malloc(sizeof(char *) * ft_count(str) + 1);
	while (j < ft_count(str))
	{
		i = ft_find_next(str, i);
		words[j] = malloc(sizeof(char) * (ft_length(str, i) + 1));
		while (!ft_is_space(str[i]) && str[i] != '\0')
			words[j][k++] = str[i++];
		words[j++][k] = '\0';
		k = 0;
	}
	return (words);
}

void	ft_putstr(char *str)
{
	while (*str)
		write(1, str++, 1);
}

int		ft_strcmp(char *s1, char *s2)
{
	int i;

	i = 0;
	while (s1[i] != '\0' && s2[i] != '\0' && s1[i] == s2[i])
		i++;
	return ((unsigned char)s1[i] - (unsigned char)s2[i]);
}

int	ft_search(char *str)
{
	char prez[] = "president";
	char atk[] = "attack";
	char guy[] = "bauer";

	if (ft_strcmp(prez, str) == 0 ? 1 : 0)
		return (1);
	if (ft_strcmp(atk, str) == 0 ? 1 : 0)
		return (1);
	if (ft_strcmp(guy, str) == 0 ? 1 : 0)
		return (1);
	else
		return (0);
}

int main(int argc, char **argv)
{
	int i;
	int found;

	i = 1;
	found = 0;
	ft_split_whitespaces(*argv);
	while (argc > i)
	{
		found = ft_search(argv[i]);
		if (found)
			ft_putstr("Alert!!!\n");
		i++;
	}
}
