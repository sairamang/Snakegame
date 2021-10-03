#include "Snake.hpp"
float a1,b1,c1,a2,b2,c2,a3,b3,c3;
bool isverticesset=false;

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
    glutInitWindowPosition(300, 300);
    glutCreateWindow("Snake Game V1.0");
    glutKeyboardFunc(KeyBoardInput);
    glutSpecialFunc(ArrowInput);
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
void SetVertices(float A1,float B1,float C1,float A2,float B2,float C2,float A3,float B3,float C3)
{
    a1=A1;
    a2=A2;
    a3=A3;
    b1=B1;
    b2=B2;
    b3=B3;
    c1=C1;
    c2=C2;
    c3=C3;
    isverticesset=true;
}

void Snake::SnakegameOpenGL()
{
    if(isverticesset)
    {
        glClearColor(0.4, 0.4, 0.4, 0.4); // Sets the Background color.
        glClear(GL_COLOR_BUFFER_BIT); //Enabled for Color writing
        glColor3f(1.0, 0, 0); //Sets the Component Color
        glOrtho(-1.0, 1.0, -1.0, 1.0, -1.0, 1.0); //left,right,bottom,top,zNear,zFar
        glBegin(GL_TRIANGLES);// Vertex is understood as triangle.For each N vertex , N/3 triangle is drawn
        glVertex3f(a1,b1,c1);
        glVertex3f(a2,b2,c2);
        glVertex3f(a3,b3,c3);
        glEnd();
        glFlush();
    }

    else
    {
        cout<<"Vertices not set !!!"<<endl;
    }
}

void KeyBoardInput(unsigned char key,int x,int y)
{
    cout<<"Key Value : "<<key<<endl;
    switch(key)
    {
        case 'w':cout<<"W Key Pressed"<<endl;break;
        case 'a':cout<<"A Key Pressed"<<endl;break;
        case 's':cout<<"S Key Pressed"<<endl;break;
        case 'd':cout<<"D Key Pressed"<<endl;break;
        case 'r':
        {
            GameRestart();
        }
    }
}
void ArrowInput(int key,int x , int y)
{
    cout<<"Arrow Input key Value : "<<key<<endl;
    switch(key)
    {
        case GLUT_KEY_UP:
        {
            cout<<"Up Key Pressed"<<endl;
            x_position=X_POSITION*-1;
            y_position=Y_POSITION*-1;
            VerticeUpdater(0);
            break;
        }
        case GLUT_KEY_DOWN:
        {
            cout<<"Down Key Pressed"<<endl;
            x_position=X_POSITION*-1;
            y_position=Y_POSITION*-1;
            VerticeUpdater(1);
            break;
        }
        case GLUT_KEY_LEFT:
        {
            cout<<"Left Key Pressed"<<endl;
            x_position=X_POSITION;
            y_position=Y_POSITION;
            VerticeUpdater(2);
            break;
        }
        case GLUT_KEY_RIGHT:
        {
            cout<<"Right Key Pressed"<<endl;
            x_position=X_POSITION*-1;
            y_position=Y_POSITION;
            Getx_position();
            VerticeUpdater(3);
            break;
        }
    }
}