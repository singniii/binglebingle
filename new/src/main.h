#ifndef MAIN_H
#define MAIN_H


#include "defs.h"
#include "init.h"
#include "input.h"
//#include "action.h"
#include "draw.h"
//#include "sound.h"

App app;
Entity player;  
Entity game_over;
Entity bg;
Entity circle;
Text score_board; 
char score_text[BUFSIZE]; 
int score;
 //
double distance;
#endif
