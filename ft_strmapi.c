/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmapi.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jona-pin <jona-pin@student.42malaga.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/04 13:34:37 by jona-pin          #+#    #+#             */
/*   Updated: 2023/10/04 13:49:35 by jona-pin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"

char	*ft_strmapi(char const *s, char (*f)(unsigned int, char))
{
	size_t	i;
	char	*str;

	str = ft_strdup(s);
	if (!str)
		return (NULL);
	i = 0;
	while (str[i])
	{
		str[i] = (*f)(i, str[i]);
		i++;
	}
	return (str);
}

/*
char function(unsigned int index, char c)
{
    if (index % 2 == 0) {
        return ft_toupper(c); 
    } else {
        return ft_tolower(c); 
    }
}


int main() {
    char input[] = "ejemplo";
    char *result = ft_strmapi(input,function);
    printf("Resultado: %s\n", result);
    free(result); 
    return 0;
	}


*/
