FILES = *.c
OBJET = *.o
NAME = libft.a

all :
	gcc -c -Wall -Wextra -Werror $(FILES)

clean :
	rm $(OBJET)

fclean : clean
	rm $(NAME)

re : 
	ar rc $(NAME) $(FILES) 

save :
	git add *
	git commit -m autosave
	git push
