/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jona-pin <jona-pin@student.42malaga.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/19 10:52:51 by jona-pin          #+#    #+#             */
/*   Updated: 2023/09/19 11:22:56 by jona-pin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"

void	*ft_memmove(void *dst, const void *src, size_t len)
{
	size_t	i;
	char	*destmove;
	char	*srcmove;

	destmove = (char *)dst;
	srcmove = (char *)src;
	i = 0;
	if (destmove > srcmove)
	{
		while (len--)
			destmove[len] = srcmove[len];
	}
	else
	{
		ft_memcpy(destmove, srcmove, len);
	}
	return (destmove);
}
/*
int	main(void)
{
	char dst[] = "Hola";
	char src[] = "Mundo";
	size_t	len;

	len = 5;
	printf("%s\n",memmove(dst, src, len));
	printf("%s",ft_memmove(dst, src, len));

	return (0);
}*/
