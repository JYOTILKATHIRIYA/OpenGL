/*
 * windmill.cpp
 *
 *  Created on: 25-Sep-2021
 *      Author: HP
 */

#include<iostream>
using namespace std;
#include<GL/glut.h>
#include"widmill.h"
#include<math.h>
void drawwindmill(){
	glClearColor(1.0,1.0,1.0,1.0);
	glClear(GL_COLOR_BUFFER_BIT);
	glPointSize(7.0);
	glColor3f(0.0,0.0,1.0);
	 float v=3.14159265359/180;

	drawtriangle(300,100,400,400,100,85);


	drawtrianglep(300+(400*cos(85*v)),100+(400*sin(85*v)),80,80,40,55);
	drawtriangle(210+(400*cos(85*v)),140+(400*sin(85*v)),50,90,90,45);
	drawtrianglep(235+(400*cos(85*v)),40+(400*sin(85*v)),90,40,90,45);
	drawtrianglep(340+(400*cos(85*v)),30+(400*sin(85*v)),90,40,60,120);


}
int main(int argc,char** argv){
	glutInit(&argc,argv);
	glutInitDisplayMode(GLUT_SINGLE|GLUT_RGB);
	glutInitWindowSize(1280,720);
	glutInitWindowPosition(20,25);
	glutCreateWindow("WindMill");
	glMatrixMode(GL_PROJECTION);
	gluOrtho2D(0.0,1280.0,0.0,720.0);
	glutDisplayFunc(drawwindmill);
	glutMainLoop();
}


