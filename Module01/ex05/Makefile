NAME = harl

CC = c++

CPPFLAGS = -Wall -Werror -Wextra -std=c++98

RM = rm -rf

SRCS = main.cpp Harl.cpp

OBJS = $(SRCS:%.cpp=%.o)

all: $(NAME)

$(NAME): $(OBJS)
	$(CC) $(CPPFLAGS) $(OBJS) -o $(NAME)

clean:
	$(RM) $(OBJS)

fclean: clean
	$(RM) $(NAME)

re: fclean all