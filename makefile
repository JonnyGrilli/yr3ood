main: 	Prog.o main.o commands.o Window.o
	g++ Prog.o commands.o Window.o main.o -o main
	
commands.o : commands.cpp commands.h
	g++ -c commands.cpp
	
Window.o: Window.cpp Window.h
	g++ -c Window.cpp
	
Prog.o : Prog.cpp prog.h command.cpp command.h
	g++ -c Prog.cpp
	
main.o : main.cpp Prog.cpp Prog.h commands.cpp commands.h Window.cpp Window.h
	g++ -c main.cpp
