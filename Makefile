NAME = railway
GCC = c++
FLAGS = -Wall -Wextra -Werror -std=c++98
PREFIX = ./src

SRCS = main.cpp $(PREFIX)/node.cpp $(PREFIX)/railNetWork.cpp $(PREFIX)/loadFile.cpp
OBJS = ${SRCS:.cpp=.o}
.cpp.o:
	$(GCC) $(FLAGS) $< -c -o $@

all:$(NAME)

$(NAME): $(OBJS)
	$(GCC) $(FLAGS) -o $@ $^

clean:
	rm -rf $(OBJS)

fclean: clean
	rm -rf $(NAME)

re: fclean all

.PHONY: all clean re fclean

