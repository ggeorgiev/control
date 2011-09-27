
#include <stdlib.h>
#include <GLUT/glut.h>

static void display(void)
{
}

static void keyboard(unsigned char key, int x, int y)
{
}

static void reshape(int w, int h)
{
}

static void init(void)
{
    GLfloat position[] = { 0.5, 2.5, 3.0, 0.0 };
    
    glEnable(GL_DEPTH_TEST);
    
    glLightfv(GL_LIGHT0, GL_POSITION, position);
    glEnable(GL_LIGHTING);
    glEnable(GL_LIGHT0);
}

int main (int argc, const char * argv[])
{
    glutInit(&argc, (char **)argv);
    glutInitDisplayMode (GLUT_SINGLE | GLUT_RGB | GLUT_DEPTH);
    glutInitWindowSize(500, 500);
    glutCreateWindow(argv[0]);
    init();
    glutReshapeFunc (reshape);
    glutKeyboardFunc (keyboard);
    glutDisplayFunc (display);
    glutMainLoop();
    return 0;
}

