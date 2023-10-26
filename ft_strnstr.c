/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jona-pin <jona-pin@student.42malaga.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/20 10:55:14 by jona-pin          #+#    #+#             */
/*   Updated: 2023/09/22 12:27:27 by jona-pin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"

char	*ft_strnstr(const char *haystack, const char *needle, size_t len)
{
	size_t	i;
	size_t	j;

	i = 0;
	if (*needle == 0 || haystack == needle)
		return ((char *)haystack);
	while (haystack[i] && i < len)
	{
		j = 0;
		while (needle[j] == haystack[i + j] && (i + j) < len)
		{
			if (needle[j + 1] == '\0')
				return ((char *)haystack + i);
			j++;
		}
		i++;
	}
	return (NULL);
}
/*
int main()
{
    const char *haystack = "Hello, World!";
    const char *needle1 = "World";
    const char *needle2 = "H";
    const char *needle3 = "Hello, World!";
    const char *needle4 = "";
    const char *needle5 = NULL;

    printf("Test 1: %s\n", ft_strnstr(haystack, needle1, 15)); 
    printf("Test 2: %s\n", ft_strnstr(haystack, needle2, 15)); 
    printf("Test 3: %s\n", ft_strnstr(haystack, needle3, 15)); 
    printf("Test 4: %s\n", ft_strnstr(haystack, needle4, 15)); 
    printf("Test 5: %s\n", ft_strnstr(haystack, needle5, 15)); 

    
    const char *long_haystack = aaaaaaaaaaaaaaaaaaaaaaaaaaaaaab";
    const char *long_needle = "aaaab";

    printf("Test 6: %s\n", ft_strnst(long_haystack, long_needle, 60)); 

    return 0;
}*/
