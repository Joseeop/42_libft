/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlen.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jona-pin <jona-pin@student.42malaga.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/11 11:58:52 by jona-pin          #+#    #+#             */
/*   Updated: 2023/09/11 12:01:04 by jona-pin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlen(const char *s)
{
	size_t	cont;

	cont = 0;
	while (*s++)
	{
		cont++;
	}
	return (cont);
}

/* int	main(void)
{
	char str[] = "Hello World";
	ft_strlen(str);
	return (0);
}*/