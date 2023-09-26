/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jona-pin <jona-pin@student.42malaga.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/22 12:20:52 by jona-pin          #+#    #+#             */
/*   Updated: 2023/09/22 12:26:38 by jona-pin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"

char	*ft_strdup(const char *s1)
{
	char	*c;
	size_t	len;

	len = ft_strlen(s1) + 1;
	c = (char *)malloc(sizeof(*c) * len);
	if (!c)
		return (NULL);
	return ((char *)ft_memcpy(c, s1, len));
}
