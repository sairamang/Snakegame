#include<iostream>
#include "GL/freeglut.h"
#include "GL/gl.h"
#include "unistd.h"
#define X_POSITION 0.95
#define Y_POSITION 0.05
#define Z_POSITION 0
#define HEIGHT 0.05
#define BASE 0.1
#define NO_OF_ENTRIES 500
extern float x_position;
extern float y_position;
static int index=0;
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
//To get Keyboard Characters
void KeyBoardInput(unsigned char key,int x,int y);
//To get Arrow Input
void ArrowInput(int key,int x,int y);
void SetVertices(float A1,float B1,float C1,float A2,float B2,float C2,float A3,float B3,float C3);
void VerticeUpdater(int direction);
void GameRestart();
void Getx_position();