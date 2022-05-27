CC          = c++
CFLAGS      = -Wall -Werror -Wextra -std=c++98
RM          = rm -f

NAME        = megaphone
SRC         = megaphone.cpp
OBJ         = $(SRC:.cpp=.o)

%.o         : %.cpp
	$(CC) $(CFLAGS) -o $@ -c $<

$(NAME)     : $(OBJ)
	$(CC) $(CFLAGS) -o $(NAME) $(OBJ)

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