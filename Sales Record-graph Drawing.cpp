/*
 * SalesRecordGraph.cpp
 *
 *  Created on: 24-Sep-2021
 *      Author: JYOTIL KATHIRIYA
 */

#include<iostream>
using namespace std;
#include<GL/glut.h>
#include "graphline.h"

void graph(){

	glClearColor(1.0,1.0,1.0,1.0);
	glClear(GL_COLOR_BUFFER_BIT);
	glPointSize(5.0);

start();
	up(15);
	straight(10);
	down(8);
	up(5);
	down(3);
	up(10);
	down(25);
	straight(8);
	up(20);
	down(30);
	up(10);
	down(15);
	straight(3);
	up(35);
	straight(2);
    up(12);
}

int main(int argc,char** argv){
	glutInit(&argc,argv);
	glutInitDisplayMode(GLUT_SINGLE|GLUT_RGB);
	glutInitWindowSize(1280,720);
	glutInitWindowPosition(20,25);
	glutCreateWindow("Sales Record");

	glMatrixMode(GL_PROJECTION);
	gluOrtho2D(0.0,1280.0,0.0,720.0);
	glutDisplayFunc(graph);

	glutMainLoop();
}



