// Programmer: Sai Raman Gowthaman
// Date: Saturday Sep 25 2021
#include <cstdlib>
#include <pthread.h>
#include <unistd.h>
#include "SupportFunc.hpp"

int main(int argc, char **argv)
{
    int rc;    
    pthread_t Timer_Sec[1];
    rc =pthread_create(&Timer_Sec[0],NULL,&TimerRun,NULL);
    if(rc)
    {
        cout<<"Thread created failed !!!"<<endl;
        cout<<"Exiting !!!"<<endl;
        exit(0);
    }
    cout<<"Welcome to my Game"<<endl;
    cout<<"Starting a New Game"<<endl;
    VerticeUpdater();
    Snake s;
    glutInit(&argc,argv);
    s.Play();
    s.OpenGLInit();
    glutIdleFunc(PostDisplay);
    glutMainLoop();
    return 0;
}