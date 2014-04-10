NAME =		Eve

SRC =		src/Main.cpp		\
		src/Precomp.cpp		\
		src/Eve/Environment.cpp	\
		src/Eve/Eng/File.cpp	\
		src/Eve/Eng/Input.cpp	\
		src/Eve/Eng/Window.cpp
OBJ =		$(SRC:.cpp=.o)

CXX =		g++
CXXFLAGS +=	-std=c++11
CXXFLAGS +=	-W -Wall -Wextra -Weffc++
CXXFLAGS +=	-I inc/

LDFLAGS +=	-lglfw -lGLEW -lGL

$(NAME):	$(OBJ)
		$(CXX) -o $(NAME) $(OBJ) $(LDFLAGS)

all:		$(NAME)

clean:
		rm -Rf $(OBJ)

fclean:		clean
		rm $(NAME)

re: 		fclean all
