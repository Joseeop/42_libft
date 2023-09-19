/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jona-pin <jona-pin@student.42malaga.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/13 16:10:40 by jona-pin          #+#    #+#             */
/*   Updated: 2023/09/13 17:22:40 by jona-pin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"

char	*ft_strrchr(const char *s, int c)
{
	int	p;

	p = ft_strlen(s - 1);
	while (p >= 0)
	{
		if (s[p] == c)
		{
			return ((char *)&s[p]);
		}
		p--;
	}
	if (c == '\0')
		return ((char *)&s[ft_strlen(s)]);
	return (NULL);
}
