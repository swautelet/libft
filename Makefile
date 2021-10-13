FILES = ft_atoi.c \
			ft_bzero.c \
			ft_calloc.c \
			ft_isalnum.c \
			ft_isalpha.c \
			ft_isascii.c \
			ft_isdigit.c \
			ft_isprint.c \
			ft_itoa.c \
			ft_memchr.c \
			ft_memcmp.c \
			ft_memcpy.c \
			ft_memmove.c \
			ft_memset.c \
			ft_putchar_fd.c \
			ft_putendl_fd.c \
			ft_putnbr_fd.c \
			ft_putstr_fd.c \
			ft_split.c \
			ft_strchr.c \
			ft_strdup.c \
			ft_striteri.c \
			ft_strjoin.c \
			ft_strlcat.c \
			ft_strlcpy.c \
			ft_strlen.c \
			ft_strmapi.c \
			ft_strncmp.c \
			ft_strnstr.c \
			ft_strrchr.c \
			ft_strtrim.c \
			ft_substr.c \
			ft_tolower.c \
			ft_toupper.c
OBJECT = $(FILES:.c=.o)
NAME = libft.a
BONUS = ft_lstnew.c \
			ft_lstadd_front.c \
			ft_lstsize.c \
			ft_lstlast.c \
			ft_lstadd_back.c \
			ft_lstdelone.c \
			ft_lstclear.c \
			ft_lstiter.c \
			ft_lstmap.c
OBJECTB = $(BONUS:.c=.o)
CFLAGS = -Wall -Wextra -Werror
AR = ar rcs

all : $(NAME)($(OBJECT))

clean :
	rm -f $(OBJECT) $(OBJECTB)

fclean : clean
	rm -f $(NAME)

save : fclean
	git add $(FILES) $(BONUS) libft.h Makefile
	git commit -m autosave
	git push git@vogsphere-v2.s19.be:vogsphere/intra-uuid-ae701809-1aab-4007-a154-6f450ffb3e79-3837416

bonus : $(NAME)($(OBJECTB))

%.o : %.c
	gcc -c $(CFLAGS) $?

$(NAME)($(OBJECT)) : $(OBJECT)
	$(AR) $(NAME) $%

$(NAME)($(OBJECTB)) : $(OBJECTB)
	$(AR) $(NAME) $%

.PHONY: all clean fclean save bonus 