/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jona-pin <jona-pin@student.42malaga.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/13 14:35:22 by jona-pin          #+#    #+#             */
/*   Updated: 2023/09/13 15:02:56 by jona-pin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"

char	*ft_strchr(const char *s, int c)
{
	int	i;
	int	stop;

	stop = 0;
	i = 0;
	while (((char *)s)[i] != '\0' && stop == 0)
	{
		if (((char *)s)[i] == c)
		{
			return ((char *)&s[i]);
			stop = 1;
		}
		i++;
	}
	if (c == '\0')
		return ((char *)&s[i]);
	return (NULL);
}
