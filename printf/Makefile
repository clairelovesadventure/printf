NAME = libftprintf.a

CC = cc

CFLAGS = -Wall -Wextra -Werror

SRCS = ft_printf.c print_hex.c print_ptr.c print_str.c \
		print_u.c

OBJS = $(SRCS:.c=.o)

all: $(NAME)

$(NAME): $(OBJS)
	ar rc $(NAME) $(OBJS)

%.o: %.c
	$(CC) -c $(CFLAGS) -o $@ $<

clean:
	rm -f $(OBJS: .c=.o)

fclean:clean
	rm -f $(NAME)

re: fclean all

.PHONY: all clean fclean re #test