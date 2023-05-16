$(NAME) = Zombie

SRC = main.cpp

OBJ = $(SRC.cpp=.o)

FLAGS = -Wall -Werror -Wextra #c98

all: $(NAME)

$(NAME): $(OBJ)
	$(CC) $(OBJ) $(FLAGS) -o $(NAME)

clean: 
	rm $(OBJ)

fclean: clean
	rm ./$(NAME)

re: fclean
	all
