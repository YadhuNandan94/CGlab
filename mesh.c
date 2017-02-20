#include<stdlib.h>
#include<stdio.h>
#include<GL/glut.h>

#define dx 10
#define dy 10
GLfloat R=0.0,G=0.0,B=0.0,br=1,bg=1,bb=1;
 void display()
{
GLint i,j;
glClear(GL_COLOR_BUFFER_BIT);
glColor3f(R,G,B);
for(i=10;i<300;i+=dx)
for(j=10;j<300;j+=dx)
{
glBegin(GL_LINE_LOOP);
glVertex2i(i,j);
glVertex2i(i+dx,j);
glVertex2i(i+dx,j+dx);
glVertex2i(i,j+dx);
glEnd();
}
glFlush();
}

int main(int argc,char **argv)
{
printf("enter the backgroundcolor");
scanf("%f%f%f",&br,&bg,&bb);
printf("enter the R,G,B");
scanf("%f%f%f",&R,&G,&B);

glutInit(&argc,argv);
glutInitDisplayMode(GLUT_SINGLE|GLUT_RGB);
glutInitWindowPosition(50,50); 
glutInitWindowSize(800,500);
glutCreateWindow("MESH");
glClearColor(br,bg,bb,0.0);
glMatrixMode(GL_PROJECTION);
gluOrtho2D(0.0,400,0.0,400);
glutDisplayFunc(display);
glutMainLoop();
return 0;
}
