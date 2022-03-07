#include<glut.h>

void display() {
	glClearColor(1, 1, 1, 0);
	glClear(GL_COLOR_BUFFER_BIT);
	glColor3f(0, 0, 0);
	glBegin(GL_POLYGON);
	glVertex2d(0, 100);
	glVertex2d(0, 200);
	glVertex2d(100, 100);
	glVertex2d(100, 200);
	glEnd();

	glBegin(GL_POLYGON);
	glVertex2d(100, 100);
	glVertex2d(100, 0);
	glVertex2d(200, 0);
	glVertex2d(200, 100);
	glEnd();

	glFlush();



}
void main() {

	glutInitWindowPosition(100, 100);
	glutInitWindowSize(200, 200);
	glutCreateWindow("simple");
	gluOrtho2D(0, 200, 0, 200);
	glutDisplayFunc(display);
	glutMainLoop();
}

