CC = cc
CFLAGS = -Wall -Wextra -Werror -I./
NAME = libft.a
SRCS_t = ft_is_check/ft_isalnum.c ft_is_check/ft_isalpha.c ft_is_check/ft_isascii.c ft_is_check/ft_isdigit.c ft_is_check/ft_isprint.c\
	ft_memory/ft_calloc.c ft_memory/ft_memchr.c ft_memory/ft_memcmp.c ft_memory/ft_memcpy.c ft_memory/ft_memmove.c ft_memory/ft_memset.c\
	ft_other/ft_bzero.c \
	ft_string/ft_split.c ft_string/ft_strchr.c ft_string/ft_strdup.c ft_string/ft_striteri.c ft_string/ft_strjoin.c\
	ft_string/ft_strlcat.c ft_string/ft_strlcpy.c ft_string/ft_strlen.c ft_string/ft_strmapi.c ft_string/ft_strncmp.c\
	ft_string/ft_strnstr.c ft_string/ft_strrchr.c ft_string/ft_strtrim.c ft_string/ft_substr.c\
	ft_to/ft_atoi.c ft_to/ft_itoa.c ft_to/ft_tolower.c ft_to/ft_toupper.c\
	ft_put/ft_putchar_fd.c ft_put/ft_putendl_fd.c ft_put/ft_putnbr_fd.c ft_put/ft_putstr_fd.c
SRCS = $(addprefix src/, $(SRCS_t))
BONUS_SRCS_t = ft_lst/ft_lstadd_back.c ft_lst/ft_lstadd_front.c ft_lst/ft_lstclear.c ft_lst/ft_lstdelone.c\
	ft_lst/ft_lstiter.c ft_lst/ft_lstlast.c ft_lst/ft_lstmap.c ft_lst/ft_lstnew.c ft_lst/ft_lstsize.c
BONUS_SRCS = $(addprefix src/, $(BONUS_SRCS_t))

OBJS = $(SRCS:.c=.o)
BONUS_OBJS = $(BONUS_SRCS:.c=.o)

all: $(NAME)

$(NAME): $(OBJS)
	ar rc $(NAME) $(OBJS)

bonus: $(OBJS) $(BONUS_OBJS)
	ar rc $(NAME) $(BONUS_OBJS) $(OBJS)

clean:
	rm -rf $(OBJS) $(BONUS_OBJS)

fclean: clean
	rm -rf $(NAME)

re: fclean all