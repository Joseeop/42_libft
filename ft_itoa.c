/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jona-pin <jona-pin@student.42malaga.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/29 11:28:57 by jona-pin          #+#    #+#             */
/*   Updated: 2023/09/29 12:25:05 by jona-pin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"

static char	*ft_fill(char *result, unsigned int number, long int len)
{
	char	*ptr;

	ptr = result + len;
	while (number > 0)
	{
		*(--ptr) = 48 + (number % 10);
		number = number / 10;
	}
	result[len] = '\0';
	return (result);
}

static int	ft_numberlen(int n)
{
	int	i;

	i = 0;
	if (n <= 0)
		i = 1;
	while (n)
	{
		n /= 10;
		i++;
	}
	return (i);
}

char	*ft_itoa(int n)
{
	char				*result;
	int					len;
	unsigned int		number;

	len = ft_numberlen(n);
	result = (char *)malloc(sizeof(char) * (len + 1));
	if (!result)
		return (NULL);
	if (n == 0)
		result[0] = '0';
	if (n < 0)
	{
		number = n * -1;
		result[0] = '-';
	}
	else
		number = n;
	result = ft_fill(result, number, len);
	return (result);
}
