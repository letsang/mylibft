SRC		= ft_atoi.c ft_bzero.c ft_isspace.c ft_isalnum.c ft_isalpha.c \
		  ft_isascii.c ft_isdigit.c ft_isprint.c ft_ischarset.c ft_itoa.c \
		  ft_memccpy.c ft_memchr.c ft_memcpy.c ft_memset.c ft_calloc.c ft_strnew.c \
		  ft_strchr.c ft_strdup.c ft_strjoin.c ft_strcat.c ft_strncat.c ft_strlcat.c ft_strtrim.c \
		  ft_strcpy.c ft_strncpy.c ft_strlcpy.c ft_strlen.c ft_strmap.c ft_strmapi.c ft_strcmp.c ft_strncmp.c \
		  ft_strnstr.c ft_strrchr.c ft_split.c ft_tolower.c ft_putchar.c ft_putstr.c \
		  ft_toupper.c ft_putchar_fd.c ft_putstr_fd.c ft_putendl_fd.c \
		  ft_putnbr.c ft_putnbr_fd.c ft_memcmp.c ft_memmove.c ft_substr.c \
		  ft_lstnew.c ft_lstadd_front.c ft_lstsize.c ft_lstlast.c ft_lstadd_back.c \
		  
OBJS	= ${SRC:.c=.o}
INC		= ./inc/

NAME	= libft.a

CC		= gcc
RM		= rm -f
LDFLAGS	= -L.
LDLIBS	= -lft

CFLAGS	= -Wall -Wextra -Werror

${NAME}:	${OBJS}
			ar rc ${NAME} ${OBJS}
			ranlib ${NAME}
%.o: %.c
	${CC} -I. -o $@ -c $? ${CFLAGS}

all:		${NAME}

clean:		
			${RM} ${OBJS}

fclean:		clean
			${RM} ${NAME}

re:			fclean all

.PHONY:		all clean fclean re
