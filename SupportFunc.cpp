#include "SupportFunc.hpp"
float Vertices[NO_OF_ENTRIES][9]={0};
char endchoice;
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
    int i=1;
    cout<<"Timer Run Start "<<endl;
    while(i<=NO_OF_ENTRIES)
    {
        sleep(1);
        VerticeHandler();
        i++;
    }
    pthread_exit(NULL);
}
void VerticeHandler()
{
    cout<<"Vertice Handler called"<<endl;
    static int index=0;
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
    SetVertices(a1,b1,c1,a2,b2,c2,a3,b3,c3);
    glutDisplayFunc(Snake::SnakegameOpenGL);
    index++;
}

void VerticeUpdater()
{
    float incr=0;
    int i,j;
    int row=0;
    row=NO_OF_ENTRIES;
    cout<<"Total no of row "<<row<<endl;
    for(i=0;i<row;i++)
    {
        for(j=0;j<10;j++)
        {
            if(j==2 || j==5 ||j==8)
                Vertices[i][j]=Z_POSITION;
            if(j==0 || j == 3 )
                Vertices[i][j]=(X_POSITION)+incr;
            if(j==1)
                Vertices[i][j]=-Y_POSITION;
            if(j == 4)
                Vertices[i][j]=Y_POSITION;
            if(j==6)
                Vertices[i][j]=X_POSITION+WIDTH+incr;
            if(j==7)
                Vertices[i][j]=0;            
        }
        incr=incr+0.1;
    }
}
