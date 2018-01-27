/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: issmith <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/01/16 03:19:37 by issmith           #+#    #+#             */
/*   Updated: 2018/01/16 06:10:47 by issmith          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		move_that(int i, int max, char *to_find, char *str)
{
	i++;
	while (to_find[i] == str[i])
	{
		to_find[i] == str[i] ?
}

int		reset_counter(int i, int *j)
{
	j = j + 1;
	i = 0;
	return (i);
}

char	*ft_strstr(char *str, char *to_find)
{
	int i;
	int j;
	int z;
	int max;
	int start;

	z = 0;
	i = 0;
	j = 0;
	start = 0;
	if (!(to_find))
		return (*str);
	while (to_find[i])
	{
		i++;
	}
	max = i;
	i = 0;
	while (i != max)
	{
		while (i = (to_find[i] == str[j] ? move_that(i, max, to_find, str)
				: reset_counter(i, &j)))
		{
			if (i == max)

