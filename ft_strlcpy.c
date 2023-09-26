/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jona-pin <jona-pin@student.42malaga.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/15 14:30:31 by jona-pin          #+#    #+#             */
/*   Updated: 2023/09/26 12:44:48 by jona-pin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcpy(char *dest, const char *src, size_t dstsize)
{
	size_t	i;

	i = 0;
	if (dstsize == 0)
	{
		while (src[i] != '\0')
			i++;
		return (i);
	}
	while (i < dstsize - 1 && src[i] != '\0')
	{
		dest[i] = src[i];
		i++;
	}
	dest[i] = '\0';
	while (src[i] != '\0')
		i++;
	return (i);
}
/*

int main()
{
    char string[] = "";
    char buffer[19];
    int r;
	int	o;

    r = strlcpy(buffer,string,5);
	o = ft_strlcpy(buffer,string,5);

    printf("Copied '%s' into '%s', length %d\n",
            string,
            buffer,
            r
          );
	printf("Copied '%s' into '%s', length %d\n",
            string,
            buffer,
            o
          );
	
    return 0;
}
*/
