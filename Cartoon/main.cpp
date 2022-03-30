#include <windows.h>
#include <GL/glut.h>
#include <stdlib.h>
#include <math.h>

void init()
{
    glClearColor(1.0,1.0,1.0,0.0);
    glOrtho(-30,30,-30,30,-30,10);
}
void circle(GLfloat rx,GLfloat ry,GLfloat cx,GLfloat cy)//radius_x,radius_y,certre_position_x,centre_position_y
{

    glBegin(GL_TRIANGLE_FAN);
    glVertex2f(cx,cy);

    for(int i=0;i<=100;i++)

    {
        float angle = 2.0f * 3.1416f * i/100;

        float x = rx * cosf(angle);
        float y = ry * sinf(angle);

        glVertex2f((x+cx),(y+cy));
    }
    glEnd();



}
void circlee(GLfloat rx,GLfloat ry,GLfloat cx,GLfloat cy)//radius_x,radius_y,certre_position_x,centre_position_y
{

    glBegin(GL_TRIANGLE_FAN);
    glVertex2f(cx,cy);

    for(int i=50;i<=100;i++)

    {
        float angle = 2.0f * 3.1416f * i/100;

        float x = rx * cosf(angle);
        float y = ry * sinf(angle);

        glVertex2f((x+cx),(y+cy));
    }
    glEnd();



}


void myDisplay()
{
    glClear(GL_COLOR_BUFFER_BIT);


    glColor3f(0.0f, 0.0f, 0.0f);
    circle(7,7,12,18);                       //right year

     glColor3f(0.0f, 0.0f, 0.0f);         //left year
    circle(7,7,-18,18);


    glColor3f(.0f, .0f, .0f);//black face
    circle(15,15,-3,2);




         glColor3f(1.0f, 0.6f, 1.0f);         //pink face up
    circle(6,10,2,5.5);


         glColor3f(1.0f, 0.6f, 1.0f);         //pink face up
    circle(6,10,-8,5.5);



       glColor3f(0.0f, 0.0f, 0.0f);         //pink face bottam  gaal kala
    circle(15.5,8,-3,-8);

         glColor3f(1.0f, 0.6f, 1.0f);         //pink face bottam  gaal pink
    circle(15.5,8,-3,-7.5);









         glColor3f(0.0f, 0.0f, 0.0f);         //pink face bottam black  thuta
    circle(7,7,-3,-12);


    glColor3f(1.0f, 0.6f, 1.0f);         //pink face bottam pink thuta
    circle(7,7,-3,-11.5);


    glColor3f(0.0f, 0.0f, 0.0f);         //pink face bottam black  jibba
    circle(6,6,-3,-10);

      glColor3f(0.0f, 0.0f, 0.0f);         // kala smile tool  left
              circle(3,1,-11,-7);

        glColor3f(0.0f, 0.0f, 0.0f);         // kala smile tool  right
              circle(3,1,5,-7);

       glColor3f(0.0f, 0.0f, 0.0f);         //pink face bottam black  smile
    circle(9,5,-3,-7);

    glColor3f(1.0f, 0.6f, 1.0f);         //pink face bottam pink  smile
    circle(9,5,-3,-6);



       glColor3f(0.0f, 0.0f, 0.0f);         //kala nose er upor
    circle(6,3,-3,-1);

     glColor3f(1.0f, 0.6f, 1.0f);         //pink nose er upor
    circle(6,3,-3,-1.5);

    glColor3f(0.0f, 0.0f, 0.0f);         // kala nose
    circle(4,3,-3,-5);


    glColor3f(0.0f, 0.0f, 0.0f);         // kala  eye left
    circle(2,4,-6,5.5);

     glColor3f(1.0f, 1.0f, 1.0f);         // shada  eye left
    circle(1.5,3.5,-6,5.5);

    glColor3f(0.0f, 0.0f, 0.0f);         // kala  eye moni left
    circle(1,2,-6,4);



       glColor3f(0.0f, 0.0f, 0.0f);         // kala eye right
    circle(2,4,-1.5,5.5);

    glColor3f(1.0f, 1.0f, 1.0f);         // shada  eye right
    circle(1.5,3.5,-1.5,5.5);

    glColor3f(0.0f, 0.0f, 0.0f);         // kala  eye moni right
    circle(1,2,-1.5,4);



    glColor3f(1.0f, 0.0f, 0.0f);         // lal jibba 2
    circle(2.5,1,-2,-14.5);

     glColor3f(0.0f, 0.0f, 0.0f);         // lal jibba  kala hide
    circle(2.7,1,-4.4,-14.2);

     glColor3f(1.0f, 0.0f, 0.0f);         // lal jibba
    circle(2,1,-4.5,-14.5);





    glFlush();
}
int main()
{
    glutInitDisplayMode(GLUT_SINGLE | GLUT_RGB);
    glutInitWindowSize(600, 600);
    glutInitWindowPosition(200, 200);
    glutCreateWindow("Circle Application   Minnie Mouse");
    init();
    glutDisplayFunc(myDisplay);
    glutMainLoop();
    return 0;
}
