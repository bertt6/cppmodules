NAME = megaphone
CC = c++
CPPFLAGS = -Wall -Wextra -Werror -std=c++98
OBJECTS = $(FILE:.cpp=.o)
FILE = megaphone.cpp
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