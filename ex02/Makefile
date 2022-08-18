NAME = animal

FLAGS = -Wall -Wextra -Werror -std=c++98

HEADERS = AAnimal.hpp Cat.hpp Dog.hpp Brain.hpp
 
LIST = main.cpp AAnimal.cpp Cat.cpp Dog.cpp Brain.cpp

OBJSFD = temporary

OBJ = $(addprefix $(OBJSFD)/,$(LIST:.cpp=.o))

all : $(NAME) 

$(OBJSFD) : 
	mkdir $@

$(OBJSFD)/%.o : %.cpp $(HEADERS) | $(OBJSFD)
	c++ -g $(FLAGS) -c $< -o $@

$(NAME) : $(OBJ)
	c++ -g $(OBJ) -o $@

clean :
	rm -f $(OBJ)
	rm -r $(OBJSFD)

fclean : clean

re : fclean all

.PHONY : all clean fclean 