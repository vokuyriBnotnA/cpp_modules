NAME = megaphone

FLAGS = -Wall -Wextra -Werror -std=c++98

LIST = megaphone.cpp

OBJSFD = temporary

OBJ = $(addprefix $(OBJSFD)/,$(LIST:.cpp=.o))

all : $(NAME)

$(OBJSFD) :
	mkdir $@

$(OBJSFD)/%.o : %.cpp | $(OBJSFD)
	c++ -g $(FLAGS) -c $< -o $@

$(NAME) : $(OBJ) 
	c++ -g $(OBJ) -o $@

clean :
	rm -f $(OBJ)

fclean : clean

re : fclean all

.PHONY : all clean fclean 