CC = c++
NAME = phonebook
FLAGS = -Wall -Wextra -Werror -std=c++98
SRC = ./srcs/PhoneBook.cpp ./srcs/Contact.cpp ./srcs/main.cpp

all: $(NAME)

$(NAME): ./srcs/*.cpp
	$(CC) $(FLAGS) $(SRC) -o $(NAME)

dev: *.cpp
	$(CC) $(SRC) -o $(NAME)

clean:
	rm -f *.o

fclean: clean
	rm -f $(NAME)

re: fclean $(NAME)