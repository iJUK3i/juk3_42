/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   juk3.h                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: issmith <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/01/16 23:59:25 by issmith           #+#    #+#             */
/*   Updated: 2018/01/17 00:54:34 by issmith          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef JUK3_H
#define JUK3_H
#define BUF_SIZE 4096

#include <fcntl.h>
#include <unistd.h>
#include <sys/types.h>
#include <sys/stat.h>

struct		s_shelf
{
	char *str;
	char **str2;
};

int		ft_atoi(char *str);
void	ft_putchar(char c);
void	ft_putstr(char *str);
void	ft_putnbr(int nb);
int		ft_str_is_alpha(char *str);
int		ft_str_is_lowercase(char *str);
int		ft_str_is_numeric(char *str);
int		ft_str_is_printable(char *str);
int		ft_str_is_uppercase(char *str);
char	ft_strcapitalize(char *str);
char 	*ft_strcat(char *dest, char *src);
int		ft_strcmp(char *s1, char *s2);
int		*ft_strcpy(char *dest, char *src);
int		ft_strlen(char *str);
int		ft_strncmp(char *s1, char *s2, unsigned int n);
char	*ft_strncpy(char *dest, char *src, unsigned int n);

#endif
