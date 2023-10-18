CC=gcc
CFLAGS=-Wall -Wextra -Werror
NAME=libft.a
INCLUDES=include/
SRC_DIR=src/
SRCS=ft_is_check/ft_isalnum.c ft_is_check/ft_isalpha.c ft_is_check/ft_isascii.c ft_is_check/ft_isprint.c ft_is_check/ft_isdigit.c \
 ft_memory/ft_memchr.c ft_memory/ft_memcmp.c ft_memory/ft_memcpy.c ft_memory/ft_memset.c \
 ft_other/ft_bzero.c \
 ft_string/ft_strlcat.c ft_string/ft_strchr.c ft_string/ft_strlcpy.c ft_string/ft_strlen.c ft_string/ft_strncmp.c ft_string/ft_strnstr.c ft_string/ft_strrchr.c \
 ft_is_check/ft_atoi.c ft_to/ft_tolower.c ft_to/ft_toupper.c
OBJS	= $(SRCS:.c=.o)
all : $(NAME)

clean : rm -rf *.o

fclaen :

re : 

$(NAME):
	$(Compiler) $(CmpFlags) -c $(CFILES) -I./
	ar -rc $(OUTN) $(OFILES)

all: $(NAME)

clean:
	rm -f $(NAME)
	rm -f $(OFILES)

fclean: clean
	rm -f $(NAME)

re: fclean all