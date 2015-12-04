# simple C makefile

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

$(PROG): $(OBJ) prog.o commands.o
	 $(CC) prog.o commands.o $(OBJ) -L$(GLLIBDIR) -L$(GLUTLIBDIR) -L$(GLXLIB) $(GLLIB) -o $(PROG)

commands.o: commands.h commands.cpp
	$(CC) -c commands.cpp

prog.o: prog.h prog.cpp commands.h commands.cpp
	$(CC) -c prog.cpp

$(OBJ): $(SRC) prog.h prog.cpp commands.h commands.cpp
	 $(CC) -I$(GLINCDIR) -I$(GLUTINCDIR) -c $(SRC)

clean: 
	/bin/rm -rf $(OBJ) $(PROG)


