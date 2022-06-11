CXX	= c++
CXXFLAGS	= -Wall -Werror -Wextra -std=c++98
RM			= rm -f

NAME		=   ex00
SRC			=   main.cpp		\
                Bureaucrat.cpp	\

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
re			: 
				make fclean
				make all