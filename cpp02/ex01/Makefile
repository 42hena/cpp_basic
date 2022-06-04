# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: hena <hena@student.42.fr>                  +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/05/30 10:03:31 by hena              #+#    #+#              #
#    Updated: 2022/06/03 02:04:56 by hena             ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

CXX			= c++
CXXFLAGS	= -Wall -Werror -Wextra -std=c++98
RM          = rm -f

NAME        =	Towardsamoreusefulfixed-pointnumberclass
SRC         =	main.cpp	\
				Fixed.cpp	\

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