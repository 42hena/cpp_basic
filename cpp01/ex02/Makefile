CXX			= c++
CXXFLAGS	= -Wall -Werror -Wextra -std=c++98
RM          = rm -f

NAME        = HITHISISBRAIN
SRC         = main.cpp 				\

OBJ         = $(SRC:.cpp=.o)

%.o         : %.cpp
		$(CXX) $(CXXFLAGS) -o $@ -c $<

$(NAME)     : $(OBJ)
		$(CXX) $(CXXFLAGS) -o $(NAME) $(OBJ)

.PHONY      : all
all         : $(NAME)

.PHONY      : clean
clean       :
		$(RM) $(OBJ)

.PHONY      : fclean
fclean      : clean
		$(RM) $(NAME)

.PHONY      : re
re          : fclean all