CC = gcc
CFLAGS = -Wall -Wextra -Werror
SRC =  $(wildcard *.c)
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