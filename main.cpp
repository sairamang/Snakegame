// Programmer: Sai Raman Gowthaman
// Date: Saturday Sep 25 2021
#include "Snake.hpp"
int main(int argc, char **argv)
{
    char start_choice,end_choice;
    int verticechoice;
    cout<<"Welcome to my Game"<<endl;
    cout<<"Starting a New Game"<<endl;
    Snake s;
    glutInit(&argc,argv);
    s.Play();
    s.OpenGLInit();
    cout<<"Enter choice 1 or 2"<<endl;
    cin>>verticechoice;
    if(verticechoice ==0)
    {
        SetVertices(0.7, 0.7,0,0,0.7,0,0,-1,0);
        glutDisplayFunc(Snake::SnakegameOpenGL);
    }
    if(verticechoice == 1)
    {
        SetVertices(-0.7, 0.7,0,0,0.7,0,0,-1,0);
        glutDisplayFunc(Snake::SnakegameOpenGL);
    }
    glutMainLoop();
    cout<<"Press 'y' to exit "<< endl;
    while(end_choice != 'y' )
    {
        cin>>end_choice;  
    };
    return 0;
}