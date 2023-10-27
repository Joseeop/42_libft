/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jona-pin <jona-pin@student.42malaga.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/05 15:59:04 by jona-pin          #+#    #+#             */
/*   Updated: 2023/10/27 11:18:43 by jona-pin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"

static size_t	count_words(char const *s, char c)
{
	size_t	count;
	size_t	i;

	count = 0;
	i = 0;
	while (s[i])
	{
		if (s[i] != c)
		{
			count ++;
			while (s[i] && s[i] != c)
				i++;
		}
		else
			i++;
	}
	return (count);
}

static void	free_tab(char **tab, int index)
{
	int	i;

	i = 0;
	while (i < index)
	{
		free(tab[i]);
		i++;
	}
	free(tab);
}

static char	*ft_substring_fill(char *str, int start, int finish)
{
	char	*sub;
	int		i;

	i = 0;
	sub = (char *)malloc(sizeof(char) * (finish - start + 1));
	if (!sub)
		return (NULL);
	while (start < finish)
		sub[i++] = str[start++];
	sub[i] = '\0';
	return (sub);
}

char	**ft_split(char const *s, char c)
{
	char	**sub;
	size_t	j;
	size_t	i;
	int		start;

	sub = malloc (sizeof (char *) * (count_words((char *)s, c) + 1));
	if (!sub || !s)
		return (NULL);
	i = -1;
	j = 0;
	start = -1;
	while (++i <= ft_strlen(s))
	{
		if (s[i] != c && start < 0)
			start = i;
		else if ((s[i] == c || i == ft_strlen(s)) && start >= 0)
		{
			sub[j++] = ft_substring_fill(s, start, i);
			if (!sub[j -1])
				return (free_tab(sub, j), NULL);
			start = -1;
		}
	}
	sub[j] = NULL;
	return (sub);
}
