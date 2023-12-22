#ifndef ACTION_H
#define ACTION_H

#include "init.h"
#include "defs.h"
#include "main.h"
#include "utils.h"
//#include "sound.h"

/* main.h에 정의된 전역 변수 사용 */
extern App app;
extern Entity player;
extern Entity game_over;
extern Text score_board;
extern char score_text[BUFSIZE];
extern int score;
extern int SCORE;
extern Entity bg;
extern Entity ground; //그라운드(원제외)..이거를어떻게정의해야할지
extern Entity circle; 


void ActGame(void);
void ActGameOver(void);
void ActPlayer(void);
void ActScoreBoard(void);
void ActcheckDeath(void);
void ActScoreBoard(void);
#endif