CC=gcc
CFLAGS=-Wall -Wextra -Werror -I$(INCLUDES)
NAME=libft.a
INCLUDES=include/
SRC_DIR=src/
SRCS=src/ft_is_check/ft_isalnum.c src/ft_is_check/ft_isalpha.c src/ft_is_check/ft_isascii.c src/ft_is_check/ft_isprint.c src/ft_is_check/ft_isdigit.c \
 src/ft_memory/ft_memchr.c src/ft_memory/ft_memcmp.c src/ft_memory/ft_memcpy.c src/ft_memory/ft_memset.c \
 src/ft_other/ft_bzero.c \
 src/ft_string/ft_strlcat.c src/ft_string/ft_strchr.c src/ft_string/ft_strlcpy.c src/ft_string/ft_strlen.c src/ft_string/ft_strncmp.c src/ft_string/ft_strnstr.c src/ft_string/ft_strrchr.c \
 src/ft_to/ft_atoi.c src/ft_to/ft_tolower.c src/ft_to/ft_toupper.c
OBJS	= $(SRCS:.c=.o)

all : $(NAME)

$(NAME):
	$(CC) $(CFLAGS) -o $(NAME) $(SRCS) libft_main_test.c
# 	$(CC) $(CFLAGS) -c -I./
# 	ar -rc $(OUTN) $(OFILES)

clean:
	rm -f $(OBJS)

fclean : clean
	rm -f $(NAME)

re : fclean all