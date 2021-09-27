FILES = ft_atoi.c ft_bzero.c ft_calloc.c ft_isalnum.c ft_isalpha.c ft_isascii.c ft_isdigit.c ft_isprint.c ft_itoa.c ft_memchr.c ft_memcmp.c ft_memcpy.c ft_memmove.c ft_memset.c ft_putchar_fd.c ft_putendl_fd.c ft_putnbr_fd.c ft_putstr_fd.c ft_split.c ft_strchr.c ft_strdup.c ft_striteri.c ft_strjoin.c ft_strlcat.c ft_strlcpy.c ft_strlen.c ft_strmapi.c ft_strncmp.c ft_strnstr.c ft_strrchr.c ft_strtrim.c ft_substr.c ft_tolower.c ft_toupper.c
OBJET = *.o
NAME = libft.a
BONUS = ft_lstnew.c ft_lstadd_front.c ft_lstsize.c ft_lstlast.c ft_lstadd_back.c ft_lstdelone.c ft_lstclear.c ft_lstiter.c ft_lstmap.c

all : re comp

clean :
	rm -f $(OBJET)

fclean : clean
	rm -f $(NAME)

re : 
	gcc -c -Wall -Wextra -Werror $(FILES)

save : fclean
	git add *.c libft.h Makefile
	git commit -m autosave
	git push

comp :
	ar rc $(NAME) $(OBJET)
	ranlib $(NAME)

fre : 
	gcc -c -Wall -Wextra -Werror $(FILES) $(BONUS)

bonus : fre comp
