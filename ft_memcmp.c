/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jona-pin <jona-pin@student.42malaga.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/19 14:28:39 by jona-pin          #+#    #+#             */
/*   Updated: 2023/09/19 15:05:18 by jona-pin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"

int	ft_memcmp(const void *s1, const void *s2, size_t n)
{
	size_t			i;
	unsigned char	*s1cmp;
	unsigned char	*s2cmp;

	i = 0;
	s1cmp = (unsigned char *)s1;
	s2cmp = (unsigned char *)s2;
	while (i < n)
	{
		if (s1cmp[i] != s2cmp[i])
			return (s1cmp[i] - s2cmp[i]);
		i++;
	}
	return (0);
}
/*
int main()
{
    int res = ft_memcmp("hola", "holaW", 6);
    printf("%d \n", res);
    printf("%d", memcmp("hola", "holaW", 6));
}*/