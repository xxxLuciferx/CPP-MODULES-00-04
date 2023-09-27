NAME = phonebook

RM = rm -rf

CC = c++

CFLAGS = -Wall -Wextra -Werror -std=c++98

SRCS = main.cpp contact.cpp phonebook.cpp

OBJS = $(SRCS:.cpp=.o)

all: $(NAME)

$(NAME): $(OBJS)
	$(CC) $(CFLAGS) $(OBJS) -o $(NAME)

clean:
	$(RM) $(OBJS) $(NAME)

fclean: clean
	$(RM) $(NAME)

re: fclean all