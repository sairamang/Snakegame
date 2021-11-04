#include "Snake.hpp"
extern int current_direction;
float a1,b1,c1,a2,b2,c2,a3,b3,c3;
bool isverticesset=false;
int choice =1;

void SevenSegmentDisplay(char SevenSegmentDisplay_choice)
{
    float seven_x1,seven_x2,seven_y1,seven_y2,seven_x,seven_y;
    seven_x1=0.88;
    seven_x2=0.92;
    seven_y1=0.87;
    seven_y2=0.93;
    seven_x=0.9;
    seven_y=0.9;
    switch(SevenSegmentDisplay_choice)
    {
        case 'A':
        {
            glBegin(GL_LINES);
            glColor3f(0, 0, 1.0);
            glVertex2f(seven_x1,seven_y2);
            glVertex2f(seven_x2,seven_y2);
            glEnd();
            break;
        }
        case 'B':
        {
            glBegin(GL_LINES);
            glColor3f(0, 0, 1.0);
            glVertex2f(seven_x2,seven_y2);
            glVertex2f(seven_x2,seven_y);
            glEnd();
            break;
        }
        case 'C':
        {
            glBegin(GL_LINES);
            glColor3f(0, 0, 1.0);
            glVertex2f(seven_x2,seven_y);
            glVertex2f(seven_x2,seven_y1);
            glEnd();
            break;
        }
        case 'D':
        {
                    
            glBegin(GL_LINES);
            glColor3f(0, 0, 1.0);
            glVertex2f(seven_x2,seven_y1);
            glVertex2f(seven_x1,seven_y1);
            glEnd();
            break;
        }
        case 'E':
        {
      
            glBegin(GL_LINES);
            glColor3f(0, 0, 1.0);
            glVertex2f(seven_x1,seven_y1);
            glVertex2f(seven_x1,seven_y);
            glEnd();
            break;
        }
        case 'F':
        {
                    
            glBegin(GL_LINES);
            glColor3f(0, 0, 1.0);
            glVertex2f(seven_x1,seven_y);
            glVertex2f(seven_x1,seven_y2);
            glEnd();
            break;
        }
        case 'G':
        {
        
            glBegin(GL_LINES);
            glColor3f(0, 0, 1.0);
            glVertex2f(seven_x2,seven_y);
            glVertex2f(seven_x1,seven_y);
            glEnd();
            break;
        }
        case 'H':
        {
            glBegin(GL_LINES);
            glColor3f(0, 0, 1.0);
            glVertex2f(seven_x1,seven_y2);
            glVertex2f(seven_x,seven_y);
            glEnd();
            break;
        }
        case 'I':
        {
            glBegin(GL_LINES);
            glColor3f(0, 0, 1.0);
            glVertex2f(seven_x,seven_y2);
            glVertex2f(seven_x,seven_y);
            glEnd();
            break;
        }
        case 'J':
        {
            glBegin(GL_LINES);
            glColor3f(0, 0, 1.0);
            glVertex2f(seven_x1,seven_y);
            glVertex2f(seven_x2,seven_y1);
            glEnd();
            break;
        }
        case 'K':
        {
            glBegin(GL_LINES);
            glColor3f(0, 0, 1.0);
            glVertex2f(seven_x,seven_y);
            glVertex2f(seven_x,seven_y1);
            glEnd();
            break;
        }
        case 'L':
        {
            glBegin(GL_LINES);
            glColor3f(0, 0, 1.0);
            glVertex2f(seven_x1,seven_y);
            glVertex2f(seven_x,seven_y1);
            glEnd();
            break;
        }
        case 'M':
        {
            glBegin(GL_LINES);
            glColor3f(0, 0, 1.0);
            glVertex2f(seven_x,seven_y1);
            glVertex2f(seven_x2,seven_y);
            glEnd();
            break;
        }
        case 'N':
        {
            glBegin(GL_LINES);
            glColor3f(0, 0, 1.0);
            glVertex2f(seven_x2,seven_y2);
            glVertex2f(seven_x,seven_y);
            glEnd();
            break;
        }
        case 'O':
        {
            glBegin(GL_LINES);
            glColor3f(0, 0, 1.0);
            glVertex2f(seven_x2,seven_y);
            glVertex2f(seven_x1,seven_y);
            glEnd();
            break;
        }
        case 'P':
        {
            glBegin(GL_LINES);
            glColor3f(0, 0, 1.0);
            glVertex2f(seven_x2,seven_y);
            glVertex2f(seven_x1,seven_y);
            glEnd();
            break;
        }
        case 'Q':
        {
            glBegin(GL_LINES);
            glColor3f(0, 0, 1.0);
            glVertex2f(seven_x2,seven_y);
            glVertex2f(seven_x1,seven_y);
            glEnd();
            break;
        }
        case 'R':
        {
            glBegin(GL_LINES);
            glColor3f(0, 0, 1.0);
            glVertex2f(seven_x2,seven_y);
            glVertex2f(seven_x1,seven_y);
            glEnd();
            break;
        }
    }
}

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

void SetVertices(float A1,float B1,float C1,float A2,float B2,float C2,float A3,float B3,float C3)
{
    if((a1>1)||(a2>1)||(a3>1)||(b1>0.85)||(b2>0.85)||(b3>0.85))
    {
        isverticesset=false;
    }
    else
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
}

void NumberDisplay()
{
    switch(choice)
    {
        case 1:
        {
            SevenSegmentDisplay('B');
            SevenSegmentDisplay('C');
            break;
        }

        case 2:
        {
            SevenSegmentDisplay('A');
            SevenSegmentDisplay('B');
            SevenSegmentDisplay('G');
            SevenSegmentDisplay('E');
            SevenSegmentDisplay('D');
            break;
        }

        case 3:
        {
            SevenSegmentDisplay('A');
            SevenSegmentDisplay('B');
            SevenSegmentDisplay('G');
            SevenSegmentDisplay('C');
            SevenSegmentDisplay('D');
            break;
        }

        case 4:
        {
            SevenSegmentDisplay('F');
            SevenSegmentDisplay('B');
            SevenSegmentDisplay('G');
            SevenSegmentDisplay('C');
            break;

        }

        case 5:
        {
            SevenSegmentDisplay('A');
            SevenSegmentDisplay('F');
            SevenSegmentDisplay('G');
            SevenSegmentDisplay('C');
            SevenSegmentDisplay('D');
            break;

        }

        case 6:
        {
            SevenSegmentDisplay('A');
            SevenSegmentDisplay('F');
            SevenSegmentDisplay('E');
            SevenSegmentDisplay('D');
            SevenSegmentDisplay('C');
            SevenSegmentDisplay('G');
            break;

        }

        case 7:
        {
            SevenSegmentDisplay('A');
            SevenSegmentDisplay('B');
            SevenSegmentDisplay('C');
            break;

        }

        case 8:
        {
            SevenSegmentDisplay('A');
            SevenSegmentDisplay('B');
            SevenSegmentDisplay('C');
            SevenSegmentDisplay('D');
            SevenSegmentDisplay('E');
            SevenSegmentDisplay('F');
            SevenSegmentDisplay('G');
            break;

        }

        case 9:
        {
            SevenSegmentDisplay('A');
            SevenSegmentDisplay('B');
            SevenSegmentDisplay('C');
            SevenSegmentDisplay('F');
            SevenSegmentDisplay('G');
            SevenSegmentDisplay('D');
            break;
        }
    }



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
        glBegin(GL_LINES);
        glColor3f(0, 1.0, 0);
        glVertex2f(0.95,0.95);
        glVertex2f(0.85,0.95);
        glEnd();
        glBegin(GL_LINES);
        glColor3f(0, 1.0, 0);
        glVertex2f(0.95,0.85);
        glVertex2f(0.85,0.85);
        glEnd();
        glBegin(GL_LINES);
        glColor3f(0, 1.0, 0);
        glVertex2f(0.85,0.95);
        glVertex2f(0.85,0.85);
        glEnd();
        glBegin(GL_LINES);
        glColor3f(0, 1.0, 0);
        glVertex2f(0.95,0.95);
        glVertex2f(0.95,0.85);
        glEnd();
        glBegin(GL_LINES);
        glColor3f(1.0, 1.0,1.0);
        glVertex2f(-0.999,0.849);
        glVertex2f(0.999,0.849);
        glEnd();
        NumberDisplay();
        glFlush();
    }

    else
    {
        cout<<"Vertices not set !!!"<<endl;
        SetVertices(0,0,0,0,0,0,0,0,0);
        glClearColor(0.4, 0.4, 0.4, 0.4); // Sets the Background color.
        glClear(GL_COLOR_BUFFER_BIT); //Enabled for Color writing
        glColor3f(1.0, 0, 0); //Sets the Component Color
        glOrtho(-1.0, 1.0, -1.0, 1.0, -1.0, 1.0); //left,right,bottom,top,zNear,zFar
        glBegin(GL_TRIANGLES);// Vertex is understood as triangle.For each N vertex , N/3 triangle is drawn
        glVertex3f(0,0,0);
        glVertex3f(0,0,0);
        glVertex3f(0,0,0);
        glEnd();
        glFlush();
        pthread_exit(NULL);
    }
}

void KeyBoardInput(unsigned char key,int x,int y)
{
    cout<<"Key Value : "<<key<<endl;
    switch(key)
    {
        case 'w':{
            cout<<"W Key Pressed"<<endl;
            choice++;
            break;
        }
        case 'a':cout<<"A Key Pressed"<<endl;break;
        case 's':cout<<"S Key Pressed"<<endl;break;
        case 'd':cout<<"D Key Pressed"<<endl;break;
        case 'r':
        {
                VerticeUpdater(3);
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
            x_position=Getx_position();
            y_position=Gety_position();
            VerticeUpdater(0);
            break;
        }
        case GLUT_KEY_DOWN:
        {
            cout<<"Down Key Pressed"<<endl;
            x_position=Getx_position();
            y_position=Gety_position();
            VerticeUpdater(1);
            break;
        }
        case GLUT_KEY_LEFT:
        {
            cout<<"Left Key Pressed"<<endl;
            x_position=Getx_position();
            y_position=Gety_position();
            VerticeUpdater(2);
            break;
        }
        case GLUT_KEY_RIGHT:
        {
            cout<<"Right Key Pressed"<<endl;
            x_position=Getx_position();
            y_position=Gety_position();
            VerticeUpdater(3);
            break;
        }
    }
}