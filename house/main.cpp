#include<GL/gl.h>
#include<GL/glu.h>
#include<GL/glut.h>

void display(void)
{
 // Middle mini house
    glBegin(GL_QUADS);
    glColor3ub(230.0f, 230.0f, 250.0f);
    glVertex3f(565.0f,300.0f,0.0f);
    glVertex3f(615.0f,300.0f,0.0f);
    glVertex3f(615.0f,320.0f,0.0f);
    glVertex3f(565.0f,320.0f,0.0f);
    glEnd();

    // Middle mini house door
    glBegin(GL_QUADS);
    glColor3ub(139.0f,58.0f,58.0f);
    glVertex3f(580.0f,300.0f,0.0f);
    glVertex3f(600.0f,300.0f,0.0f);
    glVertex3f(600.0f,310.0f,0.0f);
    glVertex3f(580.0f,310.0f,0.0f);
    glEnd();

    // middle mini house roof
    glBegin(GL_QUADS);
    glColor3ub(255.0f, 0.0f, 0.0f);
    glVertex3f(560.0f,320.0f,0.0f);
    glVertex3f(615.0f,320.0f,0.0f);
    glVertex3f(615.0f,330.0f,0.0f);
    glVertex3f(565.0f,330.0f,0.0f);
    glEnd();

    // middle big house
    glBegin(GL_QUADS);
    glColor3ub(238.0f, 207.0f, 161.0f);
    glVertex3f(615.0f,300.0f,0.0f);
    glVertex3f(710.0f,300.0f,0.0f);
    glVertex3f(710.0f,335.0f,0.0f);
    glVertex3f(615.0f,335.0f,0.0f);
    glEnd();

    // middle big house roof
    glBegin(GL_QUADS);
    glColor3ub(255.0f, 0.0f, 0.0f);
    glVertex3f(610.0f,335.0f,0.0f);
    glVertex3f(715.0f,335.0f,0.0f);
    glVertex3f(715.0f,345.0f,0.0f);
    glVertex3f(610.0f,355.0f,0.0f);
    glEnd();

    //middle big house window
    glBegin(GL_QUADS);
    glColor3ub(135.0f, 206.0f, 250.0f);
    glVertex3f(620.0f,305.0f,0.0f);
    glVertex3f(635.0f,305.0f,0.0f);
    glVertex3f(635.0f,320.0f,0.0f);
    glVertex3f(620.0f,320.0f,0.0f);
    glEnd();

    //middle big house window 2
    glBegin(GL_QUADS);
    glColor3ub(135.0f, 206.0f, 250.0f);
    glVertex3f(640.0f,305.0f,0.0f);
    glVertex3f(655.0f,305.0f,0.0f);
    glVertex3f(655.0f,320.0f,0.0f);
    glVertex3f(640.0f,320.0f,0.0f);
    glEnd();

    //middle big house door
    glBegin(GL_QUADS);
    glColor3ub(139.0f,58.0f,58.0f);
    glVertex3f(660.0f,300.0f,0.0f);
    glVertex3f(680.0f,300.0f,0.0f);
    glVertex3f(680.0f,330.0f,0.0f);
    glVertex3f(660.0f,330.0f,0.0f);
    glEnd();

    //middle big house window3
    glBegin(GL_QUADS);
    glColor3ub(135.0f, 206.0f, 250.0f);
    glVertex3f(685.0f,305.0f,0.0f);
    glVertex3f(705.0f,305.0f,0.0f);
    glVertex3f(705.0f,320.0f,0.0f);
    glVertex3f(685.0f,320.0f,0.0f);
    glEnd();

    // left mini house
    glBegin(GL_QUADS);
    glColor3ub(230.0f, 230.0f, 250.0f);
    glVertex3f(215.0f,260.0f,0.0f);
    glVertex3f(265.0f,260.0f,0.0f);
    glVertex3f(265.0f,280.0f,0.0f);
    glVertex3f(215.0f,280.0f,0.0f);
    glEnd();

    // left mini house door
    glBegin(GL_QUADS);
    glColor3ub(139.0f,58.0f,58.0f);
    glVertex3f(230.0f,260.0f,0.0f);
    glVertex3f(250.0f,260.0f,0.0f);
    glVertex3f(250.0f,270.0f,0.0f);
    glVertex3f(230.0f,270.0f,0.0f);
    glEnd();

    // left mini house roof
    glBegin(GL_QUADS);
    glColor3ub(255.0f, 0.0f, 0.0f);
    glVertex3f(210.0f,280.0f,0.0f);
    glVertex3f(265.0f,280.0f,0.0f);
    glVertex3f(265.0f,290.0f,0.0f);
    glVertex3f(215.0f,290.0f,0.0f);
    glEnd();

    // left big house
    glBegin(GL_QUADS);
    glColor3ub(255.0f, 192.0f, 203.0f);
    glVertex3f(265.0f,260.0f,0.0f);
    glVertex3f(360.0f,260.0f,0.0f);
    glVertex3f(360.0f,295.0f,0.0f);
    glVertex3f(265.0f,295.0f,0.0f);
    glEnd();

    // left big house roof
    glBegin(GL_QUADS);
    glColor3ub(255.0f, 0.0f, 0.0f);
    glVertex3f(260.0f,295.0f,0.0f);
    glVertex3f(365.0f,295.0f,0.0f);
    glVertex3f(365.0f,305.0f,0.0f);
    glVertex3f(260.0f,315.0f,0.0f);
    glEnd();

    //left big house window
    glBegin(GL_QUADS);
    glColor3ub(135.0f, 206.0f, 250.0f);
    glVertex3f(270.0f,265.0f,0.0f);
    glVertex3f(285.0f,265.0f,0.0f);
    glVertex3f(285.0f,280.0f,0.0f);
    glVertex3f(270.0f,280.0f,0.0f);
    glEnd();

    //left big house window 2
    glBegin(GL_QUADS);
    glColor3ub(135.0f, 206.0f, 250.0f);
    glVertex3f(290.0f,265.0f,0.0f);
    glVertex3f(305.0f,265.0f,0.0f);
    glVertex3f(305.0f,280.0f,0.0f);
    glVertex3f(290.0f,280.0f,0.0f);
    glEnd();

    //left big house door
    glBegin(GL_QUADS);
    glColor3ub(139.0f,58.0f,58.0f);
    glVertex3f(310.0f,260.0f,0.0f);
    glVertex3f(330.0f,260.0f,0.0f);
    glVertex3f(330.0f,290.0f,0.0f);
    glVertex3f(310.0f,290.0f,0.0f);
    glEnd();

    //left big house window3
    glBegin(GL_QUADS);
    glColor3ub(135.0f, 206.0f, 250.0f);
    glVertex3f(335.0f,265.0f,0.0f);
    glVertex3f(355.0f,265.0f,0.0f);
    glVertex3f(355.0f,280.0f,0.0f);
    glVertex3f(335.0f,280.0f,0.0f);
    glEnd();

    // Right mini house
    glBegin(GL_QUADS);
    glColor3ub(230.0f, 230.0f, 250.0f);
    glVertex3f(715.0f,260.0f,0.0f);
    glVertex3f(765.0f,260.0f,0.0f);
    glVertex3f(765.0f,280.0f,0.0f);
    glVertex3f(715.0f,280.0f,0.0f);
    glEnd();

    // Right mini house door
    glBegin(GL_QUADS);
    glColor3ub(139.0f,58.0f,58.0f);
    glVertex3f(730.0f,260.0f,0.0f);
    glVertex3f(750.0f,260.0f,0.0f);
    glVertex3f(750.0f,270.0f,0.0f);
    glVertex3f(730.0f,270.0f,0.0f);
    glEnd();

    // Right mini house roof
    glBegin(GL_QUADS);
    glColor3ub(255.0f, 0.0f, 0.0f);
    glVertex3f(710.0f,280.0f,0.0f);
    glVertex3f(765.0f,280.0f,0.0f);
    glVertex3f(765.0f,290.0f,0.0f);
    glVertex3f(715.0f,290.0f,0.0f);
    glEnd();

    // right big house
    glBegin(GL_QUADS);
    glColor3ub(147.0f,112.0f,219.0f);
    glVertex3f(765.0f,260.0f,0.0f);
    glVertex3f(860.0f,260.0f,0.0f);
    glVertex3f(860.0f,295.0f,0.0f);
    glVertex3f(765.0f,295.0f,0.0f);
    glEnd();

    // right big house roof
    glBegin(GL_QUADS);
    glColor3ub(255.0f, 0.0f, 0.0f);
    glVertex3f(760.0f,295.0f,0.0f);
    glVertex3f(865.0f,295.0f,0.0f);
    glVertex3f(865.0f,305.0f,0.0f);
    glVertex3f(760.0f,315.0f,0.0f);
    glEnd();

    //right big house window
    glBegin(GL_QUADS);
    glColor3ub(135.0f, 206.0f, 250.0f);
    glVertex3f(770.0f,265.0f,0.0f);
    glVertex3f(785.0f,265.0f,0.0f);
    glVertex3f(785.0f,280.0f,0.0f);
    glVertex3f(770.0f,280.0f,0.0f);
    glEnd();

    //right big house window 2
    glBegin(GL_QUADS);
    glColor3ub(135.0f, 206.0f, 250.0f);
    glVertex3f(790.0f,265.0f,0.0f);
    glVertex3f(805.0f,265.0f,0.0f);
    glVertex3f(805.0f,280.0f,0.0f);
    glVertex3f(790.0f,280.0f,0.0f);
    glEnd();

    //right big house door
    glBegin(GL_QUADS);
    glColor3ub(139.0f,58.0f,58.0f);
    glVertex3f(810.0f,260.0f,0.0f);
    glVertex3f(830.0f,260.0f,0.0f);
    glVertex3f(830.0f,290.0f,0.0f);
    glVertex3f(810.0f,290.0f,0.0f);
    glEnd();

    //Right big house window3
    glBegin(GL_QUADS);
    glColor3ub(135.0f, 206.0f, 250.0f);
    glVertex3f(835.0f,265.0f,0.0f);
    glVertex3f(855.0f,265.0f,0.0f);
    glVertex3f(855.0f,280.0f,0.0f);
    glVertex3f(835.0f,280.0f,0.0f);
    glEnd();

    //Road Near Hill
    glColor3ub(205.0f, 133.0f, 63.0f);
    glBegin(GL_QUADS);
    glVertex3f(0.0f,230.0f,0.0f);
    glVertex3f(1000.0f,230.0f,0.0f);
    glVertex3f(1000.0f,260.0f,0.0f);
    glVertex3f(0.0f,260.0f,0.0f);
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
