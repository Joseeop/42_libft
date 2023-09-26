NAME = libft.a

SRC = ft_isalpha.c ft_atoi.c ft_bzero.c ft_isalnum.c ft_isascii.c ft_isdigit.c ft_isprint.c \
ft_memcpy.c ft_memset.c ft_memmove.c ft_strlen.c ft_toupper.c ft_tolower.c ft_strchr.c ft_strrchr.c \
ft_strlcpy.c ft_strlcat.c ft_memcmp.c ft_memchr.c ft_strncmp.c ft_strnstr.c ft_calloc.c ft_strdup.c ft_substr.c \
ft_strjoin.c ft_strtrim.c
		


CC = gcc 

CFLAGS = -Wall -Wextra -Werror



$(NAME) : $(SRC)
	$(CC) -c $(SRC)
	ar rc $(NAME) *.o
	ranlib $(NAME)

all: $(NAME)

clean:
	rm -f *.o

fclean: clean
	rm -f $(NAME)

re: fclean all

.PHONY: clean fclean re
