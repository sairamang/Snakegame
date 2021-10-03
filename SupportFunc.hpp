#include <pthread.h>
#include <unistd.h>
#include <cstdlib>
#include "Snake.hpp"
void VerticeHandler();
void VerticeUpdater(int direction);
void VerticeUpdater_Up();
void VerticeUpdater_Down();
void VerticeUpdater_Left();
void VerticeUpdater_Right();
void PostDisplay();
void* TimerRun(void*);
void GameRestart();
void Getx_position();

using namespace std;