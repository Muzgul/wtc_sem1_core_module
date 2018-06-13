NAME = libft.a
FLAGS = -Wall -Werror -Wextra
SOURCES = ft_bzero.c ft_memccpy.c ft_memchr.c ft_memcmp.c ft_memcpy.c ft_memmove.c ft_memset.c ft_strlen.c ft_strnlen.c ft_strdup.c ft_strcpy.c ft_strncpy.c 

OBJECTS = $(SOURCES:.c=.o)

all: $(NAME)

$(NAME):
	gcc $(FLAGS) -c $(SOURCES)
	ar rc $(NAME) $(OBJECTS)
	ranlib $(NAME)

clean:
	/bin/rm -f $(OBJECTS)

fclean: clean
	/bin/rm -f $(NAME)

re: fclean all
