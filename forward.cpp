#include "forward.h"
#include <GL/glut.h> 

Forward::~Forward(){

}

void
Forward::run(){

glBegin(GL_LINE_LOOP);
glVertex3f( 0.0f, 0.0f, 0.0f); // Top
glVertex3f(value ,0.0f, 0.0f); // Bottom Left
glEnd(); 
glTranslatef(value,0,0);

}
