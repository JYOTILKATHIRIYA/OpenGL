/*
 * writing.cpp
 *
 *  Created on: 02-Oct-2021
 *      Author: JYOTIL KATHIRIYA
 */

#include<iostream>
using namespace std;
#include<GL/glut.h>
int tx=200;
void window(){
	glClearColor(1.0,1.0,1.0,1.0);
	glClear(GL_COLOR_BUFFER_BIT);
	glColor3f(0.0,0.0,0.0);
}
void write(unsigned char key,int x,int y){
	glRasterPos2d(tx,400);
         tx+=9;

	glutBitmapCharacter(GLUT_BITMAP_9_BY_15,int(key));


	//glEnd();
	glFlush();
}
int main(int argc,char** argv){
	glutInit(&argc,argv);
	glutInitDisplayMode(GLUT_SINGLE|GLUT_RGB);
	glutInitWindowSize(1280,720);
	glutInitWindowPosition(20,25);
	glutCreateWindow("Text");
	glMatrixMode(GL_PROJECTION);

	gluOrtho2D(0.0,1280.0,0.0,720.0);
	glutDisplayFunc(window);
	glutKeyboardFunc(write);
	glutMainLoop();
}

