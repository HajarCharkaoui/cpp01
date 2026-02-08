NAME = Moarbrainz

CXX = c++

CPPFLAGS = -Wall -Wextra -Werror -std=c++98

SRC = Zombie.cpp main.cpp zombiehord.cpp

OBJ = $(SRC:.cpp=.o)

all: $(NAME)

$(NAME) : $(OBJ)
	@ $(CXX) $(CPPFLAGS) $(OBJ) -o $(NAME)

%.o: %.cpp Zombie.h
	@ $(CXX) $(CPPFLAGS) -c $< -o $@

clean:
	@rm -f $(OBJ)

fclean: clean
	@rm -f $(NAME)

re: fclean all

.PHONY: all clean fclean re