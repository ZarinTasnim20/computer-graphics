#include<GL/gl.h>
#include<GL/glu.h>
#include<GL/glut.h>
void display(void)
{//Water side field
    glBegin(GL_POLYGON);
    glColor3ub(34.0,139.0,34.0);
    glVertex3f(300.0,0.0,0.0);
    glColor3ub(124.0f, 152.0f, 0.0f);
    glVertex3f(1000.0,0.0,0.0);
    glColor3ub(34.0,139.0,34.0);
    glVertex3f(1000.0,240.0,0.0);
    glColor3ub(124.0f, 152.0f, 0.0f);
    glVertex3f(300.0,240.0,0.0);
    glEnd();

    //Water
    glBegin(GL_POLYGON);
    glColor3ub(0.0,191.0,255.0);
    glVertex3f(0.0,0.0,0.0);
    glVertex3f(700.0,0.0,0.0);
    glVertex3f(600.0,120.0,0.0);
    glVertex3f(500.0,180.0,0.0);
    glVertex3f(400.0,220.0,0.0);
    glVertex3f(300.0,240.0,0.0);
    glVertex3f(0.0,240.0,0.0);
    glEnd();

    //Boat
    glBegin(GL_POLYGON);
    glColor3ub(0.0,0.0,0.0);
    glVertex3f(200.0,80.0,0.0);
    glVertex3f(300.0,80.0,0.0);
    glVertex3f(330.0,95.0,0.0);
    glVertex3f(170.0,95.0,0.0);
    glEnd();

    glBegin(GL_POLYGON);
    glColor3ub(139.0,54.0,38.0);
    glVertex3f(245.0,95.0,0.0);
    glVertex3f(250.0,95.0,0.0);
    glVertex3f(250.0,125.0,0.0);
    glVertex3f(245.0,125.0,0.0);
    glEnd();

    glBegin(GL_POLYGON);
    glColor3ub(139.0,54.0,38.0);
    glVertex3f(215.0,95.0,0.0);
    glVertex3f(220.0,95.0,0.0);
    glVertex3f(220.0,115.0,0.0);
    glVertex3f(215.0,115.0,0.0);
    glEnd();

    glBegin(GL_POLYGON);
    glColor3ub(139.0,54.0,38.0);
    glVertex3f(275.0,95.0,0.0);
    glVertex3f(280.0,95.0,0.0);
    glVertex3f(280.0,115.0,0.0);
    glVertex3f(275.0,115.0,0.0);
    glEnd();

    glBegin(GL_POLYGON);
    glColor3ub(255.0,0.0,0.0);
    glVertex3f(160.0,96.0,0.0);
    glVertex3f(215.0,96.0,0.0);
    glVertex3f(215.0,115.0,0.0);
    glEnd();

    //half Boat
    glBegin(GL_POLYGON);
    glColor3ub(0.0,0.0,0.0);
    glVertex3f(0.0,180.0,0.0);
    glVertex3f(50.0,180.0,0.0);
    glVertex3f(80.0,195.0,0.0);
    glVertex3f(0.0,195.0,0.0);
    glEnd();

    glBegin(GL_POLYGON);
    glColor3ub(139.0,54.0,38.0);
    glVertex3f(35.0,195.0,0.0);
    glVertex3f(40.0,195.0,0.0);
    glVertex3f(40.0,215.0,0.0);
    glVertex3f(35.0,215.0,0.0);
    glEnd();

    glBegin(GL_POLYGON);
    glColor3ub(139.0,54.0,38.0);
    glVertex3f(10.0,195.0,0.0);
    glVertex3f(15.0,195.0,0.0);
    glVertex3f(15.0,210.0,0.0);
    glVertex3f(10.0,210.0,0.0);
    glEnd();

    glFlush();
}
void init(void)
{
        glClearColor(1.0,1.0,1.0,1.0);
        glMatrixMode(GL_PROJECTION);
        glLoadIdentity();
        glOrtho(0.0,1000.0,0.0,500.0,-1.0,0.0);
}

int main(int argc,char**argv)
{
    glutInit(&argc,argv);
    glutInitDisplayMode(GLUT_RGB);
    glutInitWindowSize(1900,1900);
    glutInitWindowPosition(0,0);
    glutCreateWindow("Village Landscape");
    init();
    glutDisplayFunc(display);
    glutMainLoop();
    return 0;
}
