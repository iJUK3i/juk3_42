/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: issmith <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/01/23 16:35:37 by issmith           #+#    #+#             */
/*   Updated: 2018/01/24 21:52:03 by issmith          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "header.h"

int main()
{
	t_list *list;
	void	*ptr;

	list = NULL;

	list = add_link(list, "this\n");
	list = add_link(list, "more\n");
	list = add_link(list, "stuff\n");
	print_list(list);

	return (0);
}
