/*
 * PolyGoneDrawing.cpp
 *
 *  Created on: 23-Sep-2021
 *      Author: HP
 */

#include<iostream>
using namespace std;
#include<GL/glut.h>
#include  "PolygonShapes.h"
void drawpolygon(){
	glClearColor(1.0,1.0,1.0,1.0);
	glClear(GL_COLOR_BUFFER_BIT);

	glPointSize(7.0);
	glColor3f(1.0,0.0,0.0);
	drawrect(100,350,200,200); //Square
	drawrect(100,100,200,300);  //Rectangle
	drawtriangle(450,480,180,280,210); //Triangle
	drawpentagon(450,200,100);  //Pentagon
	drawhexagon(750,500,100);  //Hexagon

}
int main(int argc,char** argv){
	glutInit(&argc,argv);
	glutInitDisplayMode(GLUT_SINGLE|GLUT_RGB);
	glutInitWindowSize(1280,720);
	glutInitWindowPosition(20,25);
	glutCreateWindow("Polygons");
	glMatrixMode(GL_PROJECTION);
	gluOrtho2D(0.0,1280.0,0.0,720.0);
	glutDisplayFunc(drawpolygon);
	glutMainLoop();

}


