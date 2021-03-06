/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jcheng <jcheng@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/29 20:16:24 by jcheng            #+#    #+#             */
/*   Updated: 2022/06/15 19:33:19 by jcheng           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strchr(const char *s, int c)
{
	char	x;

	x = (char)c;
	while (*s != '\0' && *s != x)
		s++;
	if (*s == x)
		return ((char *)s);
	return (0);
}

// int	main(void)
// {
// 	int		c = 'g';
// 	char	*str = "asdfghjkl";
// 	printf("%s\n", ft_strchr(str,c));
// }
