/*
 * NameWriting.cpp
 *
 *  Created on: 25-Sep-2021
 *      Author: HP
 */

#include<iostream>
using namespace std;
#include<GL/glut.h>
#include"shapes.h"
void namewriting(){
	glClearColor(1.0,1.0,1.0,1.0);
		glClear(GL_COLOR_BUFFER_BIT);
		glPointSize(8.0);
		glColor3f(0.6,0.1,0.1);

		drawline(80,500,200,500);
		drawline(200,500,200,368);
		glPointSize(6.0);
		arcc(360,180,133,368,68);

		glPointSize(6.0);
		drawline(230,500,330,400);
		drawline(330,400,430,500);
		glPointSize(8.0);
		drawline(330,400,330,300);

		glPointSize(6.0);
		drawcircle(530,400,100);

		glPointSize(8.0);
		drawline(650,500,800,500);
		drawline(725,500,725,300);

		drawline(850,500,1000,500);
	    drawline(925,500,925,300);
	    drawline(850,300,1000,300);

	    drawline(1050,500,1050,300);
	    drawline(1050,300,1200,300);
}
int main(int argc,char** argv){
	glutInit(&argc,argv);
	glutInitDisplayMode(GLUT_SINGLE|GLUT_RGB);
	glutInitWindowSize(1280,720);
	glutInitWindowPosition(20,25);
	glutCreateWindow("Name");
	glMatrixMode(GL_PROJECTION);
	gluOrtho2D(0.0,1280.0,0.0,720.0);
	glutDisplayFunc(namewriting);
	glutMainLoop();
}



