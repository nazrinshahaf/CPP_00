NAME = phonebook 

CC = c++
CFLAGS = -Wall -Wextra -Werror -std=c++98
RM = rm -f

SRC = Phonebook.cpp\
	  Contact.cpp\

MAIN = main.cpp

$(NAME):
	$(CC) $(CFLAGS) $(MAIN) $(SRC) -o $(NAME) 

all: $(NAME)

clean:
	$(RM) $(NAME)

fclean:	clean
		$(RM) $(NAME)

re: clean all

.PHONY:	all clean fclean re test
