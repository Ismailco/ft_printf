CC = cc
CFLAGS = -Wall -Wextra -Werror
NAME = libftprintf.a

CFILES = ft_printf.c ft_putchar.c ft_putstr.c ft_putnbr.c ft_putnbr_unsigned.c \
		ft_puthexa.c ft_puthexl.c

OFILES = $(CFILES:.c=.o)

all: $(NAME)

$(NAME): $(OFILES)
	ar rcs $(NAME) $(OFILES)

%.o: %.c libftprintf.h
	$(CC) $(CFLAGS) -c $< -o $@

clean:
	rm -f $(OFILES)

fclean: clean
	rm -f $(NAME)

re: fclean all
