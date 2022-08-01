NAME 	= push_swap

CC 		= gcc

CFLAGS 	= -Wall -Wextra -Werror 

RM 		= rm -rf

DIR = srcs

SRCS = $(wildcard srcs/*.c)

objdir = objs/
OBJS = $(SRCS:.c=.o)

all: $(NAME)

$(NAME): $(OBJS)
		make -C ./libs/libft
		mv ./libs/libft/libft.a ./libft.a

		make -C ./libs/ft_printf
		mv ./libs/ft_printf/libftprintf.a ./libftprintf.a
	$(CC) $(CFLAGS) $(OBJS) libft.a libftprintf.a -o $(NAME)

clean:
	make -C ./libs/libft fclean
	rm -rf */*.o libft.a

	make -C ./libs/ft_printf fclean
	rm -rf */*.o libftprintf.a
	$(RM) $(OBJS)

fclean: clean
	$(RM) $(NAME)

re: fclean all

.PHONY:all clean fclean re