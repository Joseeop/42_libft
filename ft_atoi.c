/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jona-pin <jona-pin@student.42malaga.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/13 17:30:19 by jona-pin          #+#    #+#             */
/*   Updated: 2023/10/26 16:51:59 by jona-pin         ###   ########.fr       */
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
    char orig [] = "   -134";
    printf("%i\n", atoi(orig));
    printf("%i", ft_atoi(orig));

    return 0;
}
*/
