NAME	:= ZombieHorde

SRCS	:= srcs/Zombie.cpp srcs/main.cpp srcs/ZombieHorde.cpp

CC		:= clang++

FLAGS	:= -Wall -Wextra -Werror -std=c++98

RM		:= rm -rf

OBJS	:= $(SRCS:.cpp=.o)

%.o: %.cpp
		$(CC) $(FLAGS) -c $< -o $@

all: $(NAME)

$(NAME): $(OBJS)
		$(CC) $(FLAGS) $^ -o $(NAME)

clean:
		$(RM) $(OBJS)

fclean: clean
		$(RM) $(NAME)

re: fclean all

.PHONY	: all re clean fclean