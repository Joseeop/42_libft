/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jona-pin <jona-pin@student.42malaga.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/15 15:26:18 by jona-pin          #+#    #+#             */
/*   Updated: 2023/09/20 15:12:44 by jona-pin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"

size_t	ft_strlcat(char *dst, const char *src, size_t dstsize)
{
	size_t	i;
	size_t	lim;
	size_t	limd;

	i = 0;
	limd = ft_strlen(dst);
	lim = ft_strlen(src);
	if (dstsize <= limd)
		return (lim + dstsize);
	while (src[i] != '\0' && limd + i < dstsize - 1)
	{
		dst[limd + i] = src[i];
		i++;
	}
	dst[limd + i] = '\0';
	return (lim + limd);
}

/*int main()
{
    char dst[] = "pqrs";
    char src[]= "abcdefghi";
    int r;
	int	o;

    r = strlcat(dst,src,10);
	o = ft_strlcat(dst,src,10);

    printf("Copied '%s' into '%s', length %d\n",
            dst,
            src,
            r
          );
	printf("Copied '%s' into '%s', length %d\n",
            dst,
            src,
            o
          );
	
    return 0;

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

}*/
