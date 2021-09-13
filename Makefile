FILES = *.c
OBJET = *.o
NAME = libft.a

all : re comp

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
comp :
	ar rc $(NAME) $(OBJET)