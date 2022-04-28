NAME	:= ex02

SRCS	:= srcs/main.cpp srcs/Bureaucrat.cpp srcs/Form.cpp srcs/ShrubberyCreationForm.cpp srcs/RobotomyRequestForm.cpp srcs/PresidentialPardonForm.cpp

CC		:= c++

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