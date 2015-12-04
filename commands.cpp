#include "commands.h"
#include <GL/glut.h>  

istream& operator>> (istream& in, Command& a)
{
	in >> a.value >> ws;
	cout << a.value << endl;
	return in;
}

float Command::getValue() {
	return value;
}

Forward::~Forward(){

}

void
Forward::run(){

glBegin(GL_LINE_LOOP);
glVertex3f( 0.0f, 0.0f, 0.0f); // Top
glVertex3f(value ,0.0f, 0.0f); // Bottom Left
glEnd(); 

}

Rotate::~Rotate(){

}

void
Rotate::run(){

glRotatef(value, 0,0,1);

}

Jump::~Jump(){

}

void
Jump::run(){

glTranslatef(value,0,0); 

}

Repeat::~Repeat(){

}

void
Repeat::run(){

}

istream& operator>>(istream& in, Repeat& a){

 return in;

}

//---------------------------------------------------------------
//---------------------------------------------------------------
/*
void
Jump::run(float v):value(v){

glTranslatef(v,0,0); 

}

void
Rotate::run(float v):value(v){

glRotatef(v,0,0,1);

}

void
Forward::run(float v):value(v){

glBegin(GL_LINE_LOOP);
glVertex3f( 0.0f, 0.0f, 0.0f); // Top
glVertex3f(v ,0.0f, 0.0f); // Bottom Left
glEnd(); 

}
*/
