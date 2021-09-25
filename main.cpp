// Programmer: Sai Raman Gowthaman
// Date: Saturday Sep 25 2021
#include "Snake.hpp"
int main(int argc, char **argv)
{
    char start_choice,end_choice;
    cout<<"Welcome to my Game"<<endl;
    cout<<"Starting a New Game"<<endl;
    Snake s;
    glutInit(&argc,argv);
    s.Play();
    s.OpenGLInit();
    cout<<"Press 'y' to exit "<< endl;
    while(end_choice != 'y' )
    {
        cin>>end_choice;  
    };
    return 0;
}