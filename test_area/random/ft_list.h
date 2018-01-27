/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   header.h                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: issmith <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/01/23 16:34:01 by issmith           #+#    #+#             */
/*   Updated: 2018/01/23 19:08:45 by issmith          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_LIST_H
# define FT_LIST_H

# include <stdlib.h>
# include <unistd.h>

typedef struct			s_list
{
	struct s_list	*next;
	void			*data;
}						t_list;

void					ft_putstr(char *str);
void					print_list(t_list *list);
t_list					*ft_create_elem(void *data);

#endif
