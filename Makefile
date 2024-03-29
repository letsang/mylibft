SRC		= ft_memset.c ft_bzero.c ft_memcpy.c ft_memccpy.c \
		  ft_memmove.c ft_memchr.c ft_memcmp.c \
		  ft_strlen.c ft_isalpha.c ft_isdigit.c ft_isalnum.c \
		  ft_isascii.c ft_isprint.c ft_toupper.c ft_tolower.c \
		  ft_strchr.c ft_strrchr.c ft_strncmp.c \
		  ft_strlcpy.c ft_strlcat.c ft_strnstr.c ft_atoi.c \
		  ft_calloc.c ft_strdup.c ft_substr.c ft_strjoin.c ft_strtrim.c \
		  ft_split.c ft_itoa.c ft_strmapi.c \
		  ft_putchar_fd.c ft_putstr_fd.c ft_putendl_fd.c ft_putnbr_fd.c \

OBJS	= ${SRC:.c=.o}

BONUS	= ${SRC:.c=.o} ft_lstnew.o ft_lstadd_front.o ft_lstsize.o ft_lstlast.o \
	ft_lstadd_back.o ft_lstdelone.o ft_lstclear.o ft_lstiter.o ft_lstmap.o \
	ft_ischarset.o ft_isspace.o ft_putchar.o ft_putnbr.o ft_putstr.o ft_strcat.o \
	ft_strcmp.o ft_strcpy.o ft_strmap.o ft_strncat.o ft_strncpy.o ft_strnew.o \

NAME	= libft.a

CC		= gcc
CFLAGS	= -Wall -Wextra -Werror

RM		= rm -f

${NAME}:	libft.h ${OBJS}
			ar rc ${NAME} ${OBJS}
			ranlib ${NAME}

%.o: %.c
	${CC} -I. -o $@ -c $? ${CFLAGS}

all:		${NAME}

bonus:		libft.h ${BONUS}
			ar rc ${NAME} ${BONUS}
			ranlib ${NAME}

clean:		
			${RM} ${BONUS}

fclean:		clean
			${RM} ${NAME}

re:			fclean all

.PHONY:		all clean fclean re bonus
