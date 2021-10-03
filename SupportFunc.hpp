#include <pthread.h>
#include <unistd.h>
#include <cstdlib>
#include "Snake.hpp"
#define X_POSITION -0.95
#define Y_POSITION 0.05
#define Z_POSITION 0
#define WIDTH 0.05
#define NO_OF_ENTRIES 20
void VerticeHandler();
void VerticeUpdater();
void PostDisplay();
void* TimerRun(void*);

using namespace std;