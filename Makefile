NAME = libft.a
CFLAGS = -Wall -Wextra -Werror
CC = cc
CFILES = $(wildcard *.c)
OFILES =$(CFILES:.c=.o)
all : $(NAME)
$(NAME):$(OFILES)
	ar rcs $(NAME) $(OFILES)
%.o:%.c libft.h
	$(CC) $(CFLAGS) -c $< -o $@
clean : 
	rm -f *.o
fclean : clean
	rm -f $(NAME)
re : fclean all
.PHONY: all clean fclean re
