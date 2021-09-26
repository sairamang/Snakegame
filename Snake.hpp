#include<iostream>
#include "GL/freeglut.h"
#include "GL/gl.h"
#include "unistd.h"
using namespace std;
class Snake
{
    public:
        //Initialize the Game Object
        Snake();
        //Closing the Game Object
        ~Snake();
        //Start Point of Game
        void Play();
        //Handling the OpenGL
        void OpenGLInit();
        //Testing by drawing a Triangle First
        static void OpenGLTestTriangle();
        //Snake game function
        static void SnakegameOpenGL();
};