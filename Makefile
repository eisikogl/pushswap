NAME 	= push_swap

CC 		= gcc

CFLAGS 	= -Wall -Wextra -Werror 

RM 		= rm -rf

DIR = srcs

SRCS = $(wildcard srcs/*/*.c)

objdir = objs/
OBJS = $(SRCS:.c=.o)

all: $(NAME)

$(NAME): $(OBJS)
	$(CC) $(CFLAGS) $(OBJS) -o $(NAME)

clean:
	$(RM) $(OBJS)

fclean: clean
	$(RM) $(NAME)

re: fclean all

.PHONY:all clean fclean re