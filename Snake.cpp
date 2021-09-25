#include "Snake.hpp"
Snake::Snake()
{
    cout<<"New Game Started"<<endl;
}
Snake::~Snake()
{
    cout<<"Closing the Game"<<endl;
}
void Snake::Play()
{
    cout<<"Let's Play"<<endl;
}
void Snake::OpenGLInit()
{
    cout<<"Open  GL Initialized"<< endl;
    glutInitDisplayMode(GLUT_SINGLE);
    glutInitWindowPosition(100, 100);
    glutCreateWindow("OpenGL - Creating a triangle");
    glutDisplayFunc(Snake::OpenGLTestTriangle);
    glutMainLoop();
}

void Snake::OpenGLTestTriangle()
{
    cout<<"OpenGLTestTriangle"<<endl;
    glClearColor(0.4, 0.4, 0.4, 0.4);
    glClear(GL_COLOR_BUFFER_BIT);
    glColor3f(1.0, 1.0, 1.0);
    glOrtho(-1.0, 1.0, -1.0, 1.0, -1.0, 1.0);
    glBegin(GL_TRIANGLES);
    glVertex3f(-0.7, 0.7, 0);
    glVertex3f(0.7, 0.7, 0);
    glVertex3f(0, -1, 0);
    glEnd();
    glFlush();
}