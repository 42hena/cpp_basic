CXX	= c++
CXXFLAGS	= -Wall -Werror -Wextra -std=c++98
RM			= rm -f

NAME		=   ex02
SRC			=   main.cpp		\
                Bureaucrat.cpp	\
				Form.cpp		\
				ShrubberyCreationForm.cpp	\
				RobotomyRequestForm.cpp		\
				PresidentialPardonForm.cpp	\

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