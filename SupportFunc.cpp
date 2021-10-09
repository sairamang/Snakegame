#include "SupportFunc.hpp"
int current_direction;
float Vertices[NO_OF_ENTRIES][9]={0};
char endchoice;
int Timercount=0;
float x_position=X_POSITION;
float y_position=Y_POSITION;
void safeexit()
{
    cout<<"Press 'y' to exit "<< endl;
    cin>>endchoice;  
    if(endchoice == 'y')
    {
        cout<<"Exiting the Application !!! "<<endl;
        exit(0);
    }

}
void PostDisplay()
{
    glutPostRedisplay();
}
void* TimerRun(void*)
{
    cout<<"Timer Run Start "<<endl;
    while(Timercount<=NO_OF_ENTRIES)
    {
        usleep(500000);
        VerticeHandler();
        Timercount++;
    }
    pthread_exit(NULL);
}
void VerticeHandler()
{
    cout<<"Vertice Handler called"<<endl;
    float a1,a2,a3,b1,b2,b3,c1,c2,c3;
    a1=Vertices[index][0];
    b1=Vertices[index][1];
    c1=Vertices[index][2];
    a2=Vertices[index][3];
    b2=Vertices[index][4];
    c2=Vertices[index][5];
    a3=Vertices[index][6];
    b3=Vertices[index][7];
    c3=Vertices[index][8];
    cout<<"A1: "<<a1<<endl;
    cout<<"B1: "<<b1<<endl;
    cout<<"C1: "<<c1<<endl;
    cout<<"A2: "<<a2<<endl;
    cout<<"B2: "<<b2<<endl;
    cout<<"C2: "<<c2<<endl;
    cout<<"A3: "<<a3<<endl;
    cout<<"B3: "<<b3<<endl;
    cout<<"C3: "<<c3<<endl;
    SetVertices(a1,b1,c1,a2,b2,c2,a3,b3,c3);
    glutDisplayFunc(Snake::SnakegameOpenGL);
    cout<<"Vertice Handler index : "<<index<<endl;
    index++;
}

void VerticeUpdater(int direction)
{
    if(direction == 0)
    {
        VerticeUpdater_Up();
    }
    if(direction == 1)
    {
        VerticeUpdater_Down();
    }
    if(direction == 2)
    {
        VerticeUpdater_Left();
    }
    if(direction == 3)
    {
        VerticeUpdater_Right();
    }
}
void VerticeUpdater_Up()
{
    int i,j;
 
    for(i=index;i<NO_OF_ENTRIES;i++)
    {
        for(j=0;j<10;j++)
        {
            if(j==2 || j ==5 || j == 8)
            {
                Vertices[i][j] = Z_POSITION;
            }
            if(j==0)
            {
                Vertices[i][j] = x_position;
            }
            if(j==1)
            {
                Vertices[i][j] = y_position;
            }

            if(j==3)
            {
                Vertices[i][j] = x_position+BASE;
            }
            if(j==4)
            {
                Vertices[i][j]= y_position;
            }
            if(j==6)
            {
                Vertices[i][j]= x_position+(BASE/2);
            }
            if(j==7)
            {
                Vertices[i][j] = y_position + HEIGHT;
            }
        }
        y_position=y_position+0.05;
    }
}
void VerticeUpdater_Down()
{
    int i,j;
    for(i=index;i<NO_OF_ENTRIES;i++)
    {
        for(j=0;j<10;j++)
        {
            if(j==2 || j ==5 || j == 8)
            {
                Vertices[i][j] = Z_POSITION;
            }
            if(j==0)
            {
                Vertices[i][j] = x_position;
            }
            if(j==1)
            {
                Vertices[i][j] = y_position;
            }

            if(j==3)
            {
                Vertices[i][j] = x_position+BASE;
            }
            if(j==4)
            {
                Vertices[i][j]= y_position;
            }
            if(j==6)
            {
                Vertices[i][j]= x_position+(BASE/2);
            }
            if(j==7)
            {
                Vertices[i][j] = y_position - HEIGHT;
            }
        }
        y_position=y_position-0.05;
    }
}

void VerticeUpdater_Left()
{
    int i,j;

    for(i=index;i<NO_OF_ENTRIES;i++)
    {
        for(j=0;j<10;j++)
        {
            if(j==2||j==5||j==8)
            {
                Vertices[i][j]=Z_POSITION;
            }
            if(j==0)
            {
                Vertices[i][j]=x_position;
            }
            if(j==1)
            {
                Vertices[i][j]=y_position;
            }
            if(j==3)
            {
                Vertices[i][j]=x_position;
            }
            if(j==4)
            {
                Vertices[i][j]=y_position+BASE;
            }
            if(j==6)
            {
                Vertices[i][j]=x_position-HEIGHT;
            }
            if(j==7)
            {
                Vertices[i][j]=y_position+(BASE/2);
            }
        }
        x_position=x_position -0.05;
    }
}

void VerticeUpdater_Right()
{
   int i,j;
   for(i=index;i<NO_OF_ENTRIES;i++)
   {
       for(j=0;j<10;j++)
       {
           if(j==2||j==5||j==8)
           {
               Vertices[i][j]=Z_POSITION;
           }
           if(j==0)
           {
               Vertices[i][j]=x_position;
           }
           if(j==1)
           {
               Vertices[i][j]=y_position;
           }
           if(j==3)
           {
               Vertices[i][j]=x_position;
           }
           if(j==4)
           {
               Vertices[i][j]=y_position+BASE;
           }
           if(j==6)
           {
               Vertices[i][j]=x_position+HEIGHT;
           }
           if(j==7)
           {
               Vertices[i][j]=y_position+(BASE/2);
           }
       }
         x_position=x_position+0.05;
   }
}
void GameRestart()
{
    cout<<"Restart the Game"<<endl;
    VerticeUpdater(3);
    Timercount=0;
}
float Getx_position()
{
    float temp;
    cout<<"Getx_position index : "<<index<<endl;
    cout<<"Get X_Position , x_position:"<<Vertices[index][0]<<endl;
    temp=Vertices[index][0];
    return temp;
}
float Gety_position()
{
    float temp;
    cout<<"Gety_position index : "<<index<<endl;
    cout<<"Get X_Position , y_position:"<<Vertices[index][1]<<endl;
    temp=Vertices[index][1];
    return temp;
}