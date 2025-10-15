NAME = libft.a

SOURCES = srcs/ft_putchar.c srcs/ft_putstr.c srcs/ft_strcmp.c srcs/ft_strlen.c srcs/ft_swap.c

CC = cc

CFLAGS = -Wall -Wextra -Werror -Iincludes

OBJECTS = $(SOURCES:%.c=%.o)

COMPRESS = ar rcs

RM = rm -f

all: $(NAME)


$(NAME): $(OBJECTS)
	$(COMPRESS) $(NAME) $(OBJECTS)
	ranlib $(NAME)

clean:
	$(RM) $(OBJECTS)

fclean: clean
	$(RM) $(NAME)

re: fclean all

.PHONY: all clean fclean re
