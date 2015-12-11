#include "rotate.h"
#include <GL/glut.h> 

#include <iostream>

Rotate::Rotate(bool val) {
	dir = val;
	if (dir)
		std::cout << "This is a Left" << endl;
	if (!dir)
		std::cout << "This is a Right" << endl;
}

Rotate::~Rotate(){

}

void
Rotate::run(){

glRotatef(value, 0,0,1);

}

istream& operator>> (istream& in, Rotate& a){

 in >> a.value >> ws;
 if (!a.dir)
	a.value = 360 - a.value;
 std::cout << a.value << endl;
 return in;
}
