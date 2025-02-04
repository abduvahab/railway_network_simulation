NAME = railway
GCC = c++
FLAGS = -Wall -Wextra -Werror -std=c++98
SRCS = main.cpp
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

