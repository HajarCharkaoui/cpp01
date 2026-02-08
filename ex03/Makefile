NAME = ex03

CC = c++

CPPFLAGS = -Wall -Wextra -Werror -std=c++98

SRC = main.cpp HumanA.cpp HumanB.cpp Weapon.cpp

OBJ = $(SRC:.cpp=.o)


all: $(NAME)

$(NAME): $(OBJ)
	@ $(CC) $(CPPFLAGS) $(OBJ) -o $(NAME)

%.o: %.cpp HumanA.h HumanB.h Weapon.h
	@ $(CC) $(CPPFLAGS) -c $< -o $@

clean:
	@ rm -rf $(OBJ)

fclean: clean
	@ rm -rf $(NAME)

re : fclean all

.PHONY: all clean fclean re