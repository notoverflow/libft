CC = gcc
CFLAGS = -Wall -Wextra -Werror -I. -c
SRC = ft_atoi.c ft_isalnum.c ft_isalpha ft_isascii.c ft_isdigit.c \
				ft_isprint.c ft_memset.c ft_strchr.c ft_strdup.c ft_strlen.c \
				ft_strncmp.c ft_tolower ft_toupper.c ft_strrchr.c
OBJ = $(SRC:.c=.o)
TARGET = libft.a

all: $(TARGET)
$(NAME):	$(OBJ)
			ar rc $(NAME) $(OBJ)

$(TARGET):	$(OBJ)
			ar rc $(TARGET) $(OBJ)

%.o: %.c
	$(CC) $(CFLAGS) -c $< -o $@

clean:
	rm -f $(OBJ)

fclean: clean
	rm -f $(TARGET)

re: fclean all

.PHONY: all clean fclean re