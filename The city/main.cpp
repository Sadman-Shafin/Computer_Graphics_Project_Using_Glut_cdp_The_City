#ifdef _APPLE_
#include <GLUT/glut.h>
#else
#include <GL/glut.h>
#endif

#include <stdlib.h>
#include <math.h>
void display(void)
{

glClear (GL_COLOR_BUFFER_BIT);


glColor3ub (50, 56,55); //sky
glBegin(GL_POLYGON);
glVertex2i (0, 400);
glVertex2i (800, 400);
glVertex2i (800, 700);
glVertex2i (0, 700);
glEnd();

glColor3ub (102, 102, 0);//ground
glBegin(GL_POLYGON);
glVertex2i (0, 0);
glVertex2i (800, 0);
glVertex2i (800, 400);
glVertex2i (0, 400);
glEnd();


glColor3ub (32, 32, 32);//Road 1
glBegin(GL_POLYGON);
glVertex2i (0, 50);
glVertex2i (800, 50);
glVertex2i (800, 200);
glVertex2i (0, 200);
glEnd();


glEnable(GL_LINE_STIPPLE);//Road 1 Line Draw
glLineStipple(3,0x00ff);

glBegin(GL_LINES);
glColor3ub(255,255,255);
glVertex2i(0,130);
glVertex2i(800,130);
glEnd();
glDisable(GL_LINE_STIPPLE);


glColor3ub (32, 32, 32);//Road 2
glBegin(GL_POLYGON);
glVertex2i (350, 200);
glVertex2i (400, 200);
glVertex2i (400, 350);
glVertex2i (350, 350);
glEnd();

glColor3ub (32, 32, 32);//Road 3
glBegin(GL_POLYGON);
glVertex2i (0, 350);
glVertex2i (800, 350);
glVertex2i (800, 380);
glVertex2i (0, 380);
glEnd();


glColor3ub (102, 51, 0);//building 2
glBegin(GL_POLYGON);
glVertex2i (130, 270);
glVertex2i (230, 270);
glVertex2i (230, 480);
glVertex2i (130, 480);
glEnd();

glColor3ub (255, 255, 102); //building 2  window 1
glBegin(GL_POLYGON);
glVertex2i (150, 430);
glVertex2i (170, 430);
glVertex2i (170, 460);
glVertex2i (150, 460);
glEnd();

glColor3ub (32, 32, 32); //building 2  window 2
glBegin(GL_POLYGON);
glVertex2i (190, 430);
glVertex2i (210, 430);
glVertex2i (210, 460);
glVertex2i (190, 460);
glEnd();


glColor3ub (32, 32, 32); //building 2  window 3
glBegin(GL_POLYGON);
glVertex2i (150, 380);
glVertex2i (170, 380);
glVertex2i (170, 410);
glVertex2i (150, 410);
glEnd();

glColor3ub (255, 255, 102); //building 2  window 4
glBegin(GL_POLYGON);
glVertex2i (190, 380);
glVertex2i (210, 380);
glVertex2i (210, 410);
glVertex2i (190, 410);
glEnd();


glColor3ub (0, 102, 0);//building 1
glBegin(GL_POLYGON);
glVertex2i (50, 250);
glVertex2i (150, 250);
glVertex2i (150, 450);
glVertex2i (50, 450);
glEnd();

glColor3ub (255, 255, 102); //building 1  window 1
glBegin(GL_POLYGON);
glVertex2i (70, 400);
glVertex2i (90, 400);
glVertex2i (90, 430);
glVertex2i (70, 430);
glEnd();

glColor3ub (255, 255, 102); //building 1  window 2
glBegin(GL_POLYGON);
glVertex2i (110, 400);
glVertex2i (130, 400);
glVertex2i (130, 430);
glVertex2i (110, 430);
glEnd();

glColor3ub (255, 255, 102); //building 1  window 3
glBegin(GL_POLYGON);
glVertex2i (70, 350);
glVertex2i (90, 350);
glVertex2i (90, 380);
glVertex2i (70, 380);
glEnd();

glColor3ub (255, 255, 102); //building 1  window 4
glBegin(GL_POLYGON);
glVertex2i (110, 350);
glVertex2i (130, 350);
glVertex2i (130, 380);
glVertex2i (110, 380);
glEnd();

glColor3ub (0, 102, 102);//building 3
glBegin(GL_POLYGON);
glVertex2i (500, 500);
glVertex2i (430, 500);
glVertex2i (430, 300 );
glVertex2i (500, 300 );
glEnd();

glColor3ub (32, 32, 32);//building 3 window 1
glBegin(GL_POLYGON);
glVertex2i (440, 460);
glVertex2i (460, 460);
glVertex2i (460, 480);
glVertex2i (440, 480);
glEnd();

glColor3ub (32, 32, 32);//building 3 window 2
glBegin(GL_POLYGON);
glVertex2i (470, 460);
glVertex2i (490, 460);
glVertex2i (490, 480);
glVertex2i (470, 480);
glEnd();

glColor3ub (255, 255, 102);//building 3 window 3
glBegin(GL_POLYGON);
glVertex2i (440, 430);
glVertex2i (460, 430);
glVertex2i (460, 450);
glVertex2i (440, 450);
glEnd();

glColor3ub (32, 32, 32);//building 3 window 4
glBegin(GL_POLYGON);
glVertex2i (470, 430);
glVertex2i (490, 430);
glVertex2i (490, 450);
glVertex2i (470, 450);
glEnd();

glColor3ub (0, 102, 102);//building 5
glBegin(GL_POLYGON);
glVertex2i (600,290 );
glVertex2i (700,290 );
glVertex2i (700, 490);
glVertex2i (600, 490);
glEnd();

glColor3ub (255, 255, 102);//building 5 window 1
glBegin(GL_POLYGON);
glVertex2i (610, 460);
glVertex2i (630, 460);
glVertex2i (630, 480);
glVertex2i (610, 480);
glEnd();

glColor3ub (32, 32, 32);//building 5 window 2
glBegin(GL_POLYGON);
glVertex2i (640, 460);
glVertex2i (660, 460);
glVertex2i (660, 480);
glVertex2i (640, 480);
glEnd();

glColor3ub (32, 32, 32);//building 5 window 3
glBegin(GL_POLYGON);
glVertex2i (670, 460);
glVertex2i (690, 460);
glVertex2i (690, 480);
glVertex2i (670, 480);
glEnd();

glColor3ub (255, 255, 102);//building 5 window 4
glBegin(GL_POLYGON);
glVertex2i (610, 430);
glVertex2i (630, 430);
glVertex2i (630, 450);
glVertex2i (610, 450);
glEnd();

glColor3ub (255, 255, 102);//building 5 window 5
glBegin(GL_POLYGON);
glVertex2i (640, 430);
glVertex2i (660, 430);
glVertex2i (660, 450);
glVertex2i (640, 450);
glEnd();

glColor3ub (255, 255, 102);//building 5 window 6
glBegin(GL_POLYGON);
glVertex2i (670, 430);
glVertex2i (690, 430);
glVertex2i (690, 450);
glVertex2i (670, 450);
glEnd();


glColor3ub(64,64,64);//Building 4
glBegin(GL_POLYGON);
glVertex2i (550, 230);
glVertex2i (640, 230);
glVertex2i (640, 400);
glVertex2i (550, 400);
glEnd();


glColor3ub(32,32,32);//Building 4 window 1
glBegin(GL_POLYGON);
glVertex2i (565, 350);
glVertex2i (590, 350);
glVertex2i (590, 380);
glVertex2i (565, 380);
glEnd();

glColor3ub(255,255,102);//Building 4 window 2
glBegin(GL_POLYGON);
glVertex2i (600, 350);
glVertex2i (625, 350);
glVertex2i (625, 380);
glVertex2i (600, 380);
glEnd();


glColor3ub(255,255,102);//Building 4 window 3
glBegin(GL_POLYGON);
glVertex2i (565, 310);
glVertex2i (590, 310);
glVertex2i (590, 340);
glVertex2i (565, 340);
glEnd();

glColor3ub(32,32,32);//Building 4 window 4
glBegin(GL_POLYGON);
glVertex2i (600, 310);
glVertex2i (625, 310);
glVertex2i (625, 340);
glVertex2i (600, 340);
glEnd();




//Bresenham's Circle Algorithm

//Moon Shape
int p,x,y;
int xc=720, yc=600, r=45;
p=1-r;
x=0;
y=r;
while(x<=y)
{
if(p<0)
{
x=x+1;
p=p+2*x+1;
}
else
{
x=x+1;
y=y-1;
p=p+2*(x+1)-2*(y+1);
}
glColor3ub(255, 255, 255);
glBegin(GL_POLYGON);
glVertex2i(x+xc,y+yc);
glVertex2i(x+xc,-y+yc);
glVertex2i(-x+xc,-y+yc);
glVertex2i(-x+xc,y+yc);
glVertex2i(y+xc,x+yc);
glVertex2i(y+xc,-x+yc);
glVertex2i(-y+xc,-x+yc);
glVertex2i(-y+xc,x+yc);
glEnd();
}

glFlush ();

}
void init (void)
{

glMatrixMode(GL_PROJECTION);
glLoadIdentity();

gluOrtho2D(0,800,0,700);
}
int main(int argc, char** argv)
{
glutInit(&argc, argv);
glutInitDisplayMode (GLUT_SINGLE | GLUT_RGB);
glutInitWindowSize (800, 700);
glutInitWindowPosition (500, 100);
glutCreateWindow ("City");
init ();
glutDisplayFunc(display);
glutMainLoop();
return 0;
}
