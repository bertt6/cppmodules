NAME = harl
CC = c++
CPPFLAGS = -std=c++98 -Wall -Wextra -Werror
OBJECTS = $(FILE:.cpp=.o)
FILE = main.cpp Harl.cpp
RM = rm -rf

all: $(NAME)

$(NAME): $(FILE)
	$(CC) $(CPPFLAGS) -o $(NAME) $(FILE)
.c.o:
	${CC} ${CPPFLAGS} -C $< -o ${OBJECTS}
clean:
	$(RM) -f *.o
fclean: clean
	rm -rf $(NAME)
re: fclean all

.PHONY: all clean fclean re