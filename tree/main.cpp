#include<GL/gl.h>
#include<GL/glu.h>
#include<GL/glut.h>
#include <math.h>

void Circle(float cx, float cy, float radius , int r, int g ,int b)
{
glBegin(GL_POLYGON);

for (int i = 0; i <= 360; i++)
    {
    glColor3ub(r,g,b);
    double angle = 2 * 3.1416 * i / 360;
    double x = cos(angle) * radius;
    double y = sin(angle) * radius;
    glVertex2f(cx + x, cy + y);
    }
    glEnd();
}
void display(void)
{

    //SKY
    glClear(GL_COLOR_BUFFER_BIT);
    glColor3ub(108.0f, 166.0f, 205.0f);
    glBegin(GL_QUADS);
    glVertex3f(0.0f,260.0f,0.0f);
    glVertex3f(1000.0f,260.0f,0.0f);
    glVertex3f(1000.0f,500.0f,0.0f);
    glVertex3f(0.0f,500.0f,0.0f);
    glEnd();

    //sun
    Circle(500,450,25,255,255,0);
    //Cloud
    Circle(280,450,15,255,250,250);
    Circle(300,445,18,255,250,250);
    Circle(320,460,15,255,250,250);
    Circle(315,440,10,255,250,250);

    //Cloud
    Circle(80,430,15,255,250,250);
    Circle(100,445,18,255,250,250);
    Circle(120,430,15,255,250,250);
    Circle(100,425,10,255,250,250);

    //Cloud
    Circle(680,430,15,255,250,250);
    Circle(700,445,18,255,250,250);
    Circle(720,430,15,255,250,250);
    Circle(700,425,10,255,250,250);

    //Left hill
    glColor3ub(139.0f, 139.0f, 122.0f);
    glBegin(GL_TRIANGLES);
    glVertex3f(50.0f,260.0f,0.0f);
    glVertex3f(300.0f,260.0f,0.0f);
    glColor3ub(255.0f, 250.0f, 250.0f);
    glVertex3f(200.0f,420.0f,0.0f);
    glEnd();

    // Middle windmill
    glBegin(GL_QUADS);
    glColor3ub(211.0f, 211.0f, 211.0f);
    glVertex3f(530.0f,260.0f,0.0f);
    glVertex3f(538.0f,260.0f,0.0f);
    glVertex3f(538.0f,375.0f,0.0f);
    glVertex3f(530.0f,375.0f,0.0f);
    glEnd();

    glBegin(GL_TRIANGLES);
    glColor3ub(255.0f,250.0f,250.0f);
    glVertex3f(534.0f,375.0f,0.0f);
    glVertex3f(532.0f,381.0f,0.0f);
    glVertex3f(460.0f,350.0f,0.0f);
    glEnd();

    glBegin(GL_TRIANGLES);
    glColor3ub(255.0f,250.0f,250.0f);
    glVertex3f(534.0f,375.0f,0.0f);
    glVertex3f(536.0f,381.0f,0.0f);
    glVertex3f(610.0f,350.0f,0.0f);
    glEnd();

    glBegin(GL_TRIANGLES);
    glColor3ub(255.0f,250.0f,250.0f);
    glVertex3f(531.0f,382.0f,0.0f);
    glVertex3f(536.0f,378.0f,0.0f);
    glVertex3f(556.0f,450.0f,0.0f);
    glEnd();

    Circle(534.0,380.0,7.0,255.0,250.0,250.0);

    //left tilla
    glBegin(GL_POLYGON);
    glColor3ub(124.0f, 152.0f, 0.0f);
    glVertex3f(500.0f,260.0f,0.0f);
    glVertex3f(700.0f,260.0f,0.0f);
    glColor3ub(34.0f, 139.0f, 34.0f);
    glVertex3f(700.0f,320.0f,0.0f);
    glVertex3f(560.0f,300.0f,0.0f);
    glEnd();

    //Right tilla
    glBegin(GL_POLYGON);
    glColor3ub(124.0f, 152.0f, 0.0f);
    glVertex3f(100.0f,260.0f,0.0f);
    glVertex3f(300.0f,260.0f,0.0f);
    glColor3ub(34.0f, 139.0f, 34.0f);
    glVertex3f(300.0f,320.0f,0.0f);
    glVertex3f(160.0f,300.0f,0.0f);
    glEnd();
 // Left windmill
    glBegin(GL_QUADS);
    glColor3ub(211.0f, 211.0f, 211.0f);
    glVertex3f(380.0f,260.0f,0.0f);
    glVertex3f(388.0f,260.0f,0.0f);
    glVertex3f(388.0f,375.0f,0.0f);
    glVertex3f(380.0f,375.0f,0.0f);
    glEnd();

    glBegin(GL_TRIANGLES);
    glColor3ub(255.0f,250.0f,250.0f);
    glVertex3f(384.0f,375.0f,0.0f);
    glVertex3f(382.0f,381.0f,0.0f);
    glVertex3f(310.0f,350.0f,0.0f);
    glEnd();

    glBegin(GL_TRIANGLES);
    glColor3ub(255.0f,250.0f,250.0f);
    glVertex3f(384.0f,375.0f,0.0f);
    glVertex3f(386.0f,381.0f,0.0f);
    glVertex3f(460.0f,350.0f,0.0f);
    glEnd();

    glBegin(GL_TRIANGLES);
    glColor3ub(255.0f,250.0f,250.0f);
    glVertex3f(381.0f,382.0f,0.0f);
    glVertex3f(386.0f,378.0f,0.0f);
    glVertex3f(396.0f,450.0f,0.0f);
    glEnd();

    Circle(384.0,380.0,7.0,255.0,250.0,250.0);

    // Right windmill
    glBegin(GL_QUADS);
    glColor3ub(211.0f, 211.0f, 211.0f);
    glVertex3f(880.0f,260.0f,0.0f);
    glVertex3f(888.0f,260.0f,0.0f);
    glVertex3f(888.0f,375.0f,0.0f);
    glVertex3f(880.0f,375.0f,0.0f);
    glEnd();

    glBegin(GL_TRIANGLES);
    glColor3ub(255.0f,250.0f,250.0f);
    glVertex3f(884.0f,375.0f,0.0f);
    glVertex3f(882.0f,381.0f,0.0f);
    glVertex3f(810.0f,350.0f,0.0f);
    glEnd();

    glBegin(GL_TRIANGLES);
    glColor3ub(255.0f,250.0f,250.0f);
    glVertex3f(884.0f,375.0f,0.0f);
    glVertex3f(886.0f,381.0f,0.0f);
    glVertex3f(980.0f,350.0f,0.0f);
    glEnd();

    glBegin(GL_TRIANGLES);
    glColor3ub(255.0f,250.0f,250.0f);
    glVertex3f(881.0f,382.0f,0.0f);
    glVertex3f(886.0f,378.0f,0.0f);
    glVertex3f(906.0f,450.0f,0.0f);
    glEnd();

    Circle(884.0,380.0,7.0,255.0,250.0,250.0);

    //Right Hill
    glColor3ub(139.0f, 139.0f, 122.0f);
    glBegin(GL_TRIANGLES);
    glVertex3f(650.0f,260.0f,0.0f);
    glVertex3f(900.0f,260.0f,0.0f);
    glColor3ub(255.0f, 250.0f, 250.0f);
    glVertex3f(750.0f,420.0f,0.0f);
    glEnd();

    // mini hill
    glColor3ub(139.0f, 139.0f, 122.0f);
    glBegin(GL_TRIANGLES);
    glVertex3f(230.0f,310.0f,0.0f);
    glVertex3f(340.0f,308.0f,0.0f);
    glColor3ub(255.0f, 250.0f, 250.0f);
    glVertex3f(285.0f,390.0f,0.0f);
    glEnd();

    //Round tilla
    glBegin(GL_TRIANGLES);
    glColor3ub(34.0f, 139.0f, 34.0f);
    glVertex3f(350.0f,260.0f,0.0f);
    glColor3ub(124.0f, 152.0f, 0.0f);
    glVertex3f(500.0f,260.0f,0.0f);
    glColor3ub(34.0f, 139.0f, 34.0f);
    glVertex3f(450.0f,300.0f,0.0f);
    glEnd();

    Circle(365,285,25,34,139,34);
    Circle(385,295,25,34,139,34);
    Circle(405,290,30,34,139,34);
    Circle(435,290,20,40,139,34);
    Circle(435,290,20,45,139,34);
//Right Round tilla
    glBegin(GL_TRIANGLES);
    glColor3ub(34.0f, 139.0f, 34.0f);
    glVertex3f(850.0f,260.0f,0.0f);
    glColor3ub(124.0f, 152.0f, 0.0f);
    glVertex3f(1000.0f,260.0f,0.0f);
    glColor3ub(34.0f, 139.0f, 34.0f);
    glVertex3f(950.0f,300.0f,0.0f);
    glEnd();

    Circle(865,285,25,34,139,34);
    Circle(885,295,25,34,139,34);
    Circle(905,290,30,34,139,34);
    Circle(935,290,20,40,139,34);
    Circle(935,290,20,45,139,34);
 // 1 round tree
    Circle(52.0,285.0,13.0,34.0,139.0,34.0);
    Circle(52.0,300.0,10.0,34.0,139.0,34.0);
    glBegin(GL_QUADS);
    glColor3ub(139.0f, 54.0f, 38.0f);
    glVertex3f(50.0f,260.0f,0.0f);
    glVertex3f(53.0f,260.0f,0.0f);
    glVertex3f(53.0f,280.0f,0.0f);
    glVertex3f(50.0f,280.0f,0.0f);
    glEnd();

    //1triangle tree
    glBegin(GL_TRIANGLES);
    glColor3ub(34.0f, 139.0f, 34.0f);
    glVertex3f(90.0f,272.0f,0.0f);
    glVertex3f(113.0f,272.0f,0.0f);
    glVertex3f(101.0f,300.0f,0.0f);
    glEnd();

    glBegin(GL_QUADS);
    glColor3ub(139.0f, 54.0f, 38.0f);
    glVertex3f(100.0f,260.0f,0.0f);
    glVertex3f(103.0f,260.0f,0.0f);
    glVertex3f(103.0f,278.0f,0.0f);
    glVertex3f(100.0f,278.0f,0.0f);
    glEnd();

    // 2round tree
    Circle(152.0,319.0,13.0,34.0,139.0,34.0);
    Circle(152.0,334.0,10.0,34.0,139.0,34.0);
    glBegin(GL_QUADS);
    glColor3ub(139.0f, 54.0f, 38.0f);
    glVertex3f(150.0f,294.0f,0.0f);
    glVertex3f(153.0f,294.0f,0.0f);
    glVertex3f(153.0f,314.0f,0.0f);
    glVertex3f(150.0f,314.0f,0.0f);
    glEnd();

    //2triangle tree
    glBegin(GL_TRIANGLES);
    glColor3ub(34.0f, 139.0f, 34.0f);
    glVertex3f(190.0f,317.0f,0.0f);
    glVertex3f(213.0f,317.0f,0.0f);
    glVertex3f(201.0f,345.0f,0.0f);
    glEnd();

    glBegin(GL_QUADS);
    glColor3ub(139.0f, 54.0f, 38.0f);
    glVertex3f(200.0f,305.0f,0.0f);
    glVertex3f(203.0f,305.0f,0.0f);
    glVertex3f(203.0f,323.0f,0.0f);
    glVertex3f(200.0f,323.0f,0.0f);
    glEnd();

    // 3round tree
    Circle(502.0,285.0,13.0,34.0,139.0,34.0);
    Circle(502.0,300.0,10.0,34.0,139.0,34.0);
    glBegin(GL_QUADS);
    glColor3ub(139.0f, 54.0f, 38.0f);
    glVertex3f(500.0f,260.0f,0.0f);
    glVertex3f(503.0f,260.0f,0.0f);
    glVertex3f(503.0f,280.0f,0.0f);
    glVertex3f(500.0f,280.0f,0.0f);
    glEnd();

    //3triangle tree
    glBegin(GL_TRIANGLES);
    glColor3ub(34.0f, 139.0f, 34.0f);
    glVertex3f(390.0f,332.0f,0.0f);
    glVertex3f(413.0f,332.0f,0.0f);
    glVertex3f(401.0f,360.0f,0.0f);
    glEnd();

    glBegin(GL_QUADS);
    glColor3ub(139.0f, 54.0f, 38.0f);
    glVertex3f(400.0f,320.0f,0.0f);
    glVertex3f(403.0f,320.0f,0.0f);
    glVertex3f(403.0f,338.0f,0.0f);
    glVertex3f(400.0f,338.0f,0.0f);
    glEnd();

    // 4round tree
    Circle(702.0,285.0,13.0,34.0,139.0,34.0);
    Circle(702.0,300.0,10.0,34.0,139.0,34.0);
    glBegin(GL_QUADS);
    glColor3ub(139.0f, 54.0f, 38.0f);
    glVertex3f(700.0f,260.0f,0.0f);
    glVertex3f(703.0f,260.0f,0.0f);
    glVertex3f(703.0f,280.0f,0.0f);
    glVertex3f(700.0f,280.0f,0.0f);
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
