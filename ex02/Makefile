C++ = c++
C++_FLAGS = -Wall -Wextra -Werror -std=c++98

SRC = main.cpp\
	  Brain.cpp\
	  Animal.cpp\
	  Dog.cpp \
	  Cat.cpp \

OBJFILES = $(SRC:.cpp=.o)

NAME = animals01

all: $(NAME)

$(NAME):$(OBJFILES)
	$(C++) $(C++_FLAGS) $(OBJFILES) -o $(NAME) 

%.o: %.cpp
	$(C++) $(C++_FLAGS) -c $< -o $@

clean:
	rm -f $(OBJFILES)

fclean: clean
	rm -f $(NAME)

re: fclean all

.PHONY: all clean fclean re
