
CPP = c++
CPPFLAGS = -Wall -Wextra -Werror
SRCS = main.cpp Utils.cpp
NAME = whatever

all: $(NAME)

$(NAME): $(SRCS)
	$(CPP) $(CPPFLAGS) $(SRCS) -o $(NAME)

clean:
	rm -rf $(NAME)

re: clean all