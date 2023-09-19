/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jona-pin <jona-pin@student.42malaga.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/13 17:30:19 by jona-pin          #+#    #+#             */
/*   Updated: 2023/09/14 13:57:06 by jona-pin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"
#include <string.h>

int	ft_atoi(const char *str)
{
	int	res;
	int	sign;

	sign = 1;
	res = 0;
	while (*str == ' ' || (*str >= 9 && *str <= 13))
			str++;
	if (*str == '-')
		sign = -1;
	if (*str == '-' || *str == '+')
		str++;
	if (ft_isdigit(*str))
	{
		while (ft_isdigit(*str))
		{
			res = res * 10 + *str - '0';
			str++;
		}
	}
	return (sign * res);
}

/*
int main()
{
    char orig [] = "+1";
    printf("%i\n", atoi(orig));
    printf("%i", ft_atoi(orig));

    return 0;
}
*/
