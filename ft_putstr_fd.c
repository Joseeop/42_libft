#include "libft.h"

void	ft_putstr_fc(char *s, int fd)
{
	int	i;

	i = 0;
	if (s != NULL)
		while (s[i])
		{
			write(fd, &s[i], 1);
			i++;
		}
}
