FILES = *.c
OBJET = *.o
NAME = libft.a

all :
	gcc -c -Wall -Wextra -Werror $(FILES)

clean :
	rm $(OBJET)

fclean : clean
	rm $(NAME)

re : fclean
	ar rc $(NAME) $(FILES)
