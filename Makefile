NAME = libft.a
SRCS_DIR = ./
SRCS =	ft_atoi.c \
		ft_bzero.c \
		ft_calloc.c \
		ft_isalpha.c \
		ft_isascii.c \
		ft_isdigit.c \
		ft_isalnum.c \
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
		ft_strcpy.c \
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

SRCS_BNS =	ft_lstnew.c \
			ft_lstadd_front.c \
			ft_lstsize.c \
			ft_lstlast.c \
			ft_lstadd_back.c \
			ft_lstdelone.c \
			ft_lstclear.c \
			ft_lstiter.c \
			ft_lstmap.c

OBJ_DIR = obj/
ifdef WITH_BONUS
OBJ = $(SRCS:%.c=$(OBJ_DIR)%.o) $(SRCS_BNS:%.c=$(OBJ_DIR)%.o)
else
OBJ = $(SRCS:%.c=$(OBJ_DIR)%.o)
endif

C_FLAGS = -Wall -Werror -Wextra
CC = gcc

all: $(NAME)

$(NAME): $(OBJ)
	@ar rcs $(NAME) $(OBJ)
	@echo "\033[0;36mLibrary Ready..\033[0m"

$(OBJ_DIR)%.o: %.c
	@mkdir -p $(OBJ_DIR)
	@$(CC) $(C_FLAGS) -c $< -o $@

bonus: fclean clean
	@$(MAKE) WITH_BONUS=1 all
	@echo "\033[0;36mBonus Ready..\033[0m"

clean:
	@rm -rdf $(OBJ_DIR)

fclean: clean
	@rm -f $(NAME)

re: fclean all

.PHONY: all bonus clean fclean re