NAME := PhoneBook
CFLAGS := -Wall -Wextra -Werror -std=c++98

SRCS := main.cpp
OBJS := $(SRCS:.cpp=.o)

.PHONY: all clean fclean re

all: $(NAME)

$(NAME): $(OBJS)
	g++ $(OBJS) -o $(NAME)

%.o: %.cpp
	g++ $(CFLAGS) -c $< -o $@

clean:
	rm -f $(OBJS)

fclean: clean
	rm -f $(NAME)

re: fclean all
