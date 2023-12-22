#ifndef INPUT_H
#define INPUT_H

#include "init.h"
#include "defs.h"
//#include "utils.h"

/* main.h에 정의된 전역 변수 사용 */

extern App app;
extern Entity player;
extern Entity game_over;
extern Text score_board;
extern Entity background1; //배경
extern Entity background2; //게임시작시배경
extern char score_text[BUFSIZE];
extern int score;
extern Entity circle;


/**
 @brief 외부 입력을 받아 적절한 동작을 취하도록 한다.

 입력 처리에 대한 모든 내용을 담고 있는 함수이다. 다음과 같은 행동을 수행한다.

 1. 창닫기 버튼을 누르면 프로그램 종료
 2. 키보드를 누르면 \ref ResponseKeyDown 호출
 3. 키보드를 떼면 \ref ResponseKeyUp 호출

 @return 리턴 값 없음
 @ingroup Input
*/
void GetInput(void);

/**
 @brief 키보드를 뗐을 때 상태를 기록한다.

 \ref app 의 멤버 \ref App.key_up , \ref App.key_down , \ref App.key_left , \ref
 App.key_right 는 키보드가 눌린/떼진 상태를 기록하는 변수이다. 이벤트에 따라 키보드가
 떼진 키에 대한 변수를 0으로 설정한다.

 @param[in] event 키보드 이벤트 내용을 담고 있는 구조체

 @remark 전역변수 \ref app 구조체에 접근한다.

 @return 리턴 값 없음
 @ingroup Input
*/
void ResponseKeyUp(SDL_KeyboardEvent *event);

/**
 @brief 키보드를 눌렀을 때 상태를 기록한다.

 \ref app 의 멤버 \ref App.key_up , \ref App.key_down , \ref App.key_left , \ref
 App.key_right 는 키보드가 눌린 상태를 기록하는 변수이다. 이벤트에 따라 키보드가
 눌린 키에 대한 변수를 1으로 설정한다.

 @param[in] event 키보드 이벤트 내용을 담고 있는 구조체

 @remark 전역변수 App app 구조체에 접근한다.
 
 @return 리턴 값 없음
 @ingroup Input
*/
void ResponseKeyDown(SDL_KeyboardEvent *event);
void GetInput1(void);

void QuitTTF(void);
void QuitSDL(int);
#endif