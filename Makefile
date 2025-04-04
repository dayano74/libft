CC = cc
CFLAGS = -Wall -Wextra -Werror
AR = ar rcs
SRCS =	ft_strlen.c \
		ft_strlcpy.c \
		ft_strlcat.c \
		ft_strchr.c \
		ft_strrchr.c \
		ft_strnstr.c \
		ft_strncmp.c \
		ft_memset.c \
		ft_bzero.c \
		ft_memcpy.c \
		ft_memchr.c \
		ft_memmove.c \
		ft_memcmp.c \
		ft_atoi.c \
		ft_isalpha.c \
		ft_isdigit.c \
		ft_isalnum.c \
		ft_isascii.c \
		ft_isprint.c \
		ft_toupper.c \
		ft_tolower.c \
		ft_calloc.c \
		ft_strdup.c \
		ft_substr.c \
		ft_strjoin.c \
		ft_strtrim.c \
		ft_split.c \
		ft_itoa.c \
		ft_strmapi.c \
		ft_striteri.c\
		ft_putchar_fd.c \
		ft_putstr_fd.c \
		ft_putendl_fd.c \
		ft_putnbr_fd.c
B_SRCS = ft_lstnew_bonus.c \
		ft_lstadd_front_bonus.c \
		ft_lstsize_bonus.c \
		ft_lstlast_bonus.c \
		ft_lstadd_back_bonus.c \
		ft_lstdelone_bonus.c \
		ft_lstclear_bonus.c \
		ft_lstiter_bonus.c \
		ft_lstmap_bonus.c
OBJS = ${SRCS:.c=.o}
B_OBJS = ${B_SRCS:.c=.o}
NAME = libft.a
BONUS_FLAG = .bonus_done

all:	$(NAME)

$(NAME): $(OBJS)
	$(AR) $@ $^

bonus:$(BONUS_FLAG)

$(BONUS_FLAG): $(B_OBJS) $(OBJS)
	$(AR) $(NAME) $^
	@touch $(BONUS_FLAG)

%.o: %.c
	$(CC) $(CFLAGS) -c -o $@ -I . $<


clean:
	rm -f $(OBJS) $(B_OBJS) $(BONUS_FLAG)

fclean: clean
	rm -f $(NAME)

re: fclean all

.PHONY: all clean fclean re bonus
