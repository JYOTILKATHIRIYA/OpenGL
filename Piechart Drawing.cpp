/*
 * Piechartdrawing.cpp
 *
 *  Created on: 24-Sep-2021
 *      Author: JYOTIL KATHIRIYA
 */
#include<iostream>
using namespace std;
#include<GL/glut.h>
#include"piechart.h"
void drawpiechart(){
	glClearColor(1.0,1.0,1.0,1.0);
	glClear(GL_COLOR_BUFFER_BIT);
	glPointSize(7.0);
	glColor3f(0.0,0.0,0.0);
//piechart(41,16,9,23,11);
	piechart(25,25,10,27,13);

}

int main(int argc,char** argv){
	glutInit(&argc,argv);
	glutInitDisplayMode(GLUT_SINGLE | GLUT_RGB);
	glutInitWindowSize(1280,720);
	glutInitWindowPosition(20,25);

	glutCreateWindow("PieChart");
	glMatrixMode(GL_PROJECTION);
	gluOrtho2D(0.0,1280.0,0.0,720.0);
	glutDisplayFunc(drawpiechart);
	glutMainLoop();

}


