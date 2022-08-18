NAME = PhoneBook

FLAGS = -Wall -Wextra -Werror -std=c++98

HEADERS = PhoneBook.h PhoneBook.hpp Contact.hpp

LIST = main.cpp PhoneBook.cpp Contact.cpp

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