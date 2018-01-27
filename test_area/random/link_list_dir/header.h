/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   header.h                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: issmith <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/01/23 16:34:01 by issmith           #+#    #+#             */
/*   Updated: 2018/01/24 21:49:15 by issmith          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef HEADER_H
# define HEADER_H

# include <stdlib.h>
# include <unistd.h>

typedef struct s_list	t_list;

struct	s_list
{
	void	*data;
	char	*str;
	t_list	*next;
};

t_list	*add_link(t_list *list, char *str);
void	ft_putstr(char *str);
void	print_list(t_list *list);
t_list	*ft_create_elem(void *data);

#endif
