#ifndef UTILS_H
#define UTILS_H

#include "defs.h"
#include "main.h"
#include "action.h"
/* main.h에 정의된 전역 변수 사용 */
extern App app;
extern Entity player;
extern Entity bg;
extern Entity circle;
extern Entity game_over;
extern Text score_board;
extern char score_t3ext[BUFSIZE];
extern int score;
extern double distance;

double Rotate_player(Entity *player);
void Jump_player(void);
void Landing_player(Entity *player, double distance);
int CheckCollisionObjects(Entity *object_a, Entity *object_b);
#endif