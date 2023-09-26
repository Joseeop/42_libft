/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jona-pin <jona-pin@student.42malaga.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/25 15:25:49 by jona-pin          #+#    #+#             */
/*   Updated: 2023/09/25 15:30:54 by jona-pin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"

char	*ft_strjoin(char const *s1, char const *s2)
{
	char	*newmem;
	size_t	i;
	size_t	j;

	newmem = (char *)malloc(sizeof(char ) * (ft_strlen(s1)
				+ ft_strlen(s2) + 1));
	if (!newmem)
		return (NULL);
	i = 0;
	while (i < ft_strlen(s1))
	{
		newmem[i] = s1[i];
		i++;
	}
	j = 0;
	while (j < ft_strlen(s2))
	{
		newmem[i + j] = s2[j];
		j++;
	}
	newmem[i + j] = '\0';
	return (newmem);
}
