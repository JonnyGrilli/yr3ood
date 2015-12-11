CC=g++

GLUTLIBDIR=/opt/PDmesa/GLUT-3.7/lib
GLUTINCDIR=/opt/PDmesa/GLUT-3.7/include

GLINCDIR=/opt/PDmesa/Mesa-5.0.1/include
GLLIBDIR=/opt/PDmesa/Mesa-5.0.1/lib
#GLINCDIR=/usr/X/include
#GLLIBDIR=/usr/X/lib


GLXLIB = /usr/X11R6/lib
#GLXLIB = /usr/X11/lib
#GLXLIB = /usr/X/lib

GLLIB= -lglut -lGLU -lGL -lX11 -lXext -lXmu -lXi -lm


PROGNAME=main

PROG=$(PROGNAME)
OBJ=$(PROGNAME).o
SRC=$(PROGNAME).cpp

$(PROG): $(OBJ) prog.o command.o forward.o rotate.o jump.o repeat.o
	 $(CC) prog.o command.o forward.o rotate.o jump.o repeat.o $(OBJ) -L$(GLLIBDIR) -L$(GLUTLIBDIR) -L$(GLXLIB) $(GLLIB) -o $(PROG)
	
command.o: command.h command.cpp
	$(CC) -c command.cpp
	
forward.o: forward.h forward.cpp command.h command.cpp
	$(CC) -c forward.cpp
	
rotate.o: rotate.h rotate.cpp command.h command.cpp 
	$(CC) -c rotate.cpp
	
jump.o: jump.h jump.cpp command.h command.cpp 
	$(CC) -c jump.cpp
	
repeat.o: repeat.h repeat.cpp command.h command.cpp 
	$(CC) -c repeat.cpp

prog.o: prog.h prog.cpp command.h command.cpp forward.h forward.cpp rotate.h rotate.cpp jump.h jump.cpp repeat.h repeat.cpp
	$(CC) -c prog.cpp

$(OBJ): $(SRC) prog.h prog.cpp command.h command.cpp forward.h forward.cpp rotate.h rotate.cpp jump.h jump.cpp repeat.h repeat.cpp
	 $(CC) -I$(GLINCDIR) -I$(GLUTINCDIR) -c $(SRC)

clean: 
	/bin/rm -rf $(OBJ) $(PROG)
