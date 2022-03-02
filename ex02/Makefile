NAME = Account 

CC = c++
CFLAGS = -Wall -Wextra -Werror -std=c++98 -pedantic
RM = rm -f

SRC = Account.cpp

MAIN = test.cpp

$(NAME):
	$(CC) $(CFLAGS) $(MAIN) $(SRC) -o $(NAME) 

all: $(NAME)

clean:
	$(RM) $(NAME)

fclean:	clean
		$(RM) $(NAME)

re: clean all

.PHONY:	all clean fclean re test
