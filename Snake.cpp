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
    glutCreateWindow("Snake Game V1.0");
    glutDisplayFunc(Snake::SnakegameOpenGL);
    //glutDisplayFunc(Snake::OpenGLTestTriangle);
    glutMainLoop();
}

void Snake::OpenGLTestTriangle()
{
    cout<<"OpenGLTestTriangle"<<endl;
    glClearColor(1.0, 1.0, 1.0, 1.0);
    glClear(GL_COLOR_BUFFER_BIT);
    glColor3f(1.0, 0.0, 0.0);
    glOrtho(1.0, 1.0, 1.0, 1.0,1.0, 1.0);
    glBegin(GL_TRIANGLES);
    glVertex3f(0.7, 0.7, 0);
    glVertex3f(0, 0.7, 0);
    glVertex3f(0, -1, 0);
    glEnd();
    glFlush();
    sleep(3);
    cout<<"Changing the Vertices"<<endl;
    glBegin(GL_TRIANGLES);
    glVertex3f(-0.7, 0.7, 0);
    glVertex3f(0, 0.7, 0);
    glVertex3f(0, -1, 0);
    glEnd();
    glFlush();

}

void Snake::SnakegameOpenGL()
{
    cout<<"OpenGLSnakegame"<<endl;
    glClearColor(0.4, 0.4, 0.4, 0.4); // Sets the Background color.
    glClear(GL_COLOR_BUFFER_BIT); //Enabled for Color writing
    glColor3f(1.0, 1.0, 1.0); //Sets the Component Color
    glOrtho(-1.0, 1.0, -1.0, 1.0, -1.0, 1.0); //left,right,bottom,top,zNear,zFar
    glBegin(GL_TRIANGLES);// Vertex is understood as triangle.For each N vertex , N/3 triangle is drawn
    glVertex3f(-0.1, 0.1, 0);
    glVertex3f(-0.1, -0.1, 0);
    glVertex3f(0.1, 0, 0);
    glEnd();
    glFlush();
}