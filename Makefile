FILES = *.c
OBJET = *.o
NAME = libft.a

all : re
	ar rc $(NAME) $(OBJET) 

clean :
	rm $(OBJET)

fclean : clean
	rm $(NAME)

re : 
	gcc -c -Wall -Wextra -Werror $(FILES)

save :
	git add *
	git commit -m autosave
	git push
