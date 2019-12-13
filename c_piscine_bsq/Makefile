NAME = BSQ
SRC = *.c
FLAGS = -Wall -Wextra -Werror
all: $(NAME)
RM = /bin/rm -f
$(NAME):
	gcc $(FLAGS) -o $(NAME) $(SRC)
clean:
	$(RM) *.o
fclean: clean
		$(RM) $(NAME)