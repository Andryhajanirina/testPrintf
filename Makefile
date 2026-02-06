NAME = libftprintf.a
SOURCES = ft_printf.c ft_uitoa.c ft_string.c ft_hexadecimal.c ft_converter.c
LIBFT_PATH = libft
LIBFT = $(LIBFT_PATH)/libft.a
OBJECTS = $(SOURCES:.c=.o)
COMPILER = cc
FLAGS = -Wextra -Werror -Wall

all: $(NAME)

$(NAME): $(LIBFT)
	$(COMPILER) -c $(FLAGS) $(SOURCES)
	cp $(LIBFT) $(NAME)
	ar rcs $(NAME) $(OBJECTS)

$(LIBFT):
	make -C $(LIBFT_PATH)

clean:
	make -C $(LIBFT_PATH) fclean
	rm -f $(OBJECTS)

fclean: clean
	make -C $(LIBFT_PATH) fclean
	rm -f $(NAME)

re: fclean all

.PHONY: re fclean clean all