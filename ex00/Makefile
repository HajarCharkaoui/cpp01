NAME = BraiiinzzZ

CXX = c++

CPPFLAGS = -Wall -Wextra -Werror -std=c++98

SRC = Zombie.cpp newZombie.cpp randomChump.cpp

OBJ = $(SRC:.cpp=.o)

all: $(NAME)

$(NAME): $(OBJ)
	@ $(CXX) $(CPPFLAGS) $(OBJ) -o $(NAME)

%.o: %.cpp Zombie.h
	@ $(CXX) $(CPPFLAGS) -c $< -o $@

clean:
	@ rm -rf $(OBJ)

fclean: clean
	@ rm -rf $(NAME)

re : fclean all

.PHONY: all clean fclean re