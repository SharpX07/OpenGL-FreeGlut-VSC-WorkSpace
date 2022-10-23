#include <GL/glut.h>

void inicializar()
{
	glClearColor(0,0,0,1);
}

void display()
{
	glClear(GL_COLOR_BUFFER_BIT);
	
    glColor3f(1,1,1);
    glBegin(GL_LINES);
    glVertex2f(-1,-1);
    glVertex2f(1,1);
    glEnd();

	glutSwapBuffers();
}

void resize(int w, int h){
	glMatrixMode(GL_MODELVIEW);
	glViewport(0,0,w,h);		
	glMatrixMode(GL_PROJECTION);
    glLoadIdentity();
}

int main(int argc, char** argv)
{
	glutInit(&argc, argv);
	glutInitDisplayMode(GLUT_DOUBLE | GLUT_RGB);
	glutInitWindowSize(400,400);
	glutInitWindowPosition(100,200);
	glutCreateWindow("Hello World");
	
	inicializar();		
	glutDisplayFunc(display);
	glutReshapeFunc(resize);
	
	glutMainLoop();
	
	return 0;
}