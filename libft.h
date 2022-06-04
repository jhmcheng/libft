/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   libft.h                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jcheng <jcheng@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/29 21:29:52 by jcheng            #+#    #+#             */
/*   Updated: 2022/06/04 23:25:48 by jcheng           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef LIBFT_H
# define LIBFT_H

#include <unistd.h>
#include <stdio.h>
#include <string.h>
#include <stdlib.h>

int		ft_isalpha(int c);
int		ft_isdigit(int x);
int		ft_isalnum(int c);
int		ft_isascii(int x);
int		ft_isprint(unsigned char x);
int		ft_strlen(const char *str);
void	*ft_memset(void *b, int c, size_t len);

void	*ft_memcpy(void * dst, const void *src, size_t n);
void	*ft_memmove(void *dst, const void *src, size_t len);

int		ft_toupper(int c);
int		ft_tolower(int c);
char	*ft_strchr(const char *s, int c);
char	*ft_strrchr(const char *s, int c);
int		ft_strncmp(const char *s1, const char *s2, size_t n);
void	*ft_memchr(const void *s, int c, size_t n);
int		ft_memcmp(const void *s1, const void *s2, size_t n);

#endif