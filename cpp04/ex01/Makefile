CXXFLAGS	= c++
CXXFLAGS	= -Wall -Werror -Wextra -std=c++98
RM			= rm -f

NAME		=   Idon’twanttosettheworldonfire
SRC			=   main.cpp		\
                Animal.cpp		\
				Cat.cpp			\
				Dog.cpp			\
				Brain.cpp		\
				

OBJ			= $(SRC:.cpp=.o)

%.o			: %.cpp
		$(CXX) $(CXXFLAGS) -o $@ -c $<

$(NAME)		: $(OBJ)
				$(CXX) $(CXXFLAGS) -o $(NAME) $(OBJ)

.PHONY		: all
all			: $(NAME)

.PHONY		: clean
clean		:
				$(RM) $(OBJ)

.PHONY		: fclean
fclean		: clean
				$(RM) $(NAME)

.PHONY		: re
re			: fclean all