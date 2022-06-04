/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jcheng <jcheng@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/01 21:05:32 by jcheng            #+#    #+#             */
/*   Updated: 2022/06/04 15:17:34 by jcheng           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdio.h>

int	ft_memcmp(const void *s1, const void *s2, size_t n)
{
	size_t			i;
	unsigned char	*str1;
	unsigned char	*str2;

	i = 0;
	str1 = (unsigned char *)s1;
	str2 = (unsigned char *)s2;
	while (*(str1 + i) == *(str2 + i) && i < n)
			i++;
	return (*(str1 + i) - *(str2 + i));
}

int	main(void)
{
	char	*str1 = "ba";
	char	*str2 = "ba";
	size_t			n = 15;
	printf("%d\n", ft_memcmp(str1, str2, n));
}
