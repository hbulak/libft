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
		ft_toupper.c \

SRCS_BNS =	ft_lstnew_bonus.c \
			ft_lstadd_front_bonus.c \
			ft_lstsize_bonus.c \
			ft_lstlast_bonus.c \
			ft_lstadd_back_bonus.c \
			ft_lstdelone_bonus.c \
			ft_lstclear_bonus.c \
			ft_lstiter_bonus.c \
			ft_lstmap_bonus.c

OBJ_DIR = obj/
OBJ = $(SRCS:%.c=$(OBJ_DIR)%.o)
OBJ_BONUS = $(SRCS_BNS:%.c=$(OBJ_DIR)%.o)

C_FLAGS = -Wall -Werror -Wextra
CC = gcc

all: $(NAME)

$(NAME): $(OBJ)
	@ar rcs $(NAME) $(OBJ)
	@echo "\033[0;36mLibrary Ready..\033[0m"

$(OBJ_DIR)%.o: %.c
	@mkdir -p $(OBJ_DIR)
	@$(CC) $(C_FLAGS) -c $< -o $@

bonus: $(OBJ) $(OBJ_BONUS)
	@ar rcs $(NAME) $(OBJ) $(OBJ_BONUS)

$(OBJ_BONUS): $(SRCS_BNS:%.c=$(OBJ_DIR)%.o)

clean:
	@rm -rdf $(OBJ_DIR)

fclean: clean
	@rm -f $(NAME) libft.so

re: fclean all

.PHONY: all bonus clean fclean re

so: $(OBJ) $(OBJ_BONUS)
	$(CC) -shared -o libft.so $(OBJ) $(OBJ_BONUS)
