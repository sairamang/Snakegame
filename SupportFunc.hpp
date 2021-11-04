#include <pthread.h>
#include <unistd.h>
#include <cstdlib>
#include "Snake.hpp"
extern bool isverticesset;
void VerticeHandler();
void VerticeUpdater(int direction);
void VerticeUpdater_Up();
void VerticeUpdater_Down();
void VerticeUpdater_Left();
void VerticeUpdater_Right();
void VerticeUpdater_Restart();
void PostDisplay();
void* TimerRun(void*);
void GameRestart();
float Getx_position();
float Gety_position();
void UpFirstQuadrant();
void UpSecondQuadrant();
void UpThirdQuadrant();
void DownFirstQuadrant();
void DownSecondQuadrant();
void DownThirdQuadrant();
void convertDowntoRight();
void convertLefttoRight();
void ConvertUptoLeft();
void ConvertDowntoLeft();
void ConvertRighttoLeft();
void ConvertUptoDown();
void ConvertLefttoDown();
void ConvertRighttoDown();
void ConvertDowntoUp();
void ConvertLefttoUp();
void ConvertRighttoUp();















using namespace std;