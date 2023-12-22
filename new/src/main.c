#include "main.h"

int main(void) {
    int tmpcnt = 0;

    srand(time(NULL));

    /* 1. 초기화 */
    //InitMemorySet();
    InitSDL();
    InitTTF();
    //InitGameOver();
    InitPlayer();
    InitBG();  // 추가
    Initcircle();

    //InitBullet();
    //InitScoreBoard();
    //InitSound();
    //LoadSound();

    /* BGM은 계속 재생되므로 루프 밖에서 재생 */
    //PlayBGM();

    /* 2. 프로그램 무한 루프 */
    for (;;) {
        /* (1) 빈 화면 만들기 */
        ClearWindow();

        /* (2) 키보드 입력 받기*/
        GetInput();
        
        /* (3) 메인 로직 수행 후 객체들 화면에 그리기 */
        if (player.health) {
            /* 게임 진행 중일 시 */
            ActGame();
            DrawGame();}

           /* if (tmpcnt++ == FPS) {
                score++;
                tmpcnt = 0;
            }
        } else {
            /* 게임 오버일 시 (게임 오버 화면 출력) */
            //ActGameOver();
           // DrawGameOver();
        //} 
        /* (4) 화면 보여주기 */
        ShowWindow();

        /* 일정 시간 대기 (60FPS 기준 한 프레임에 16ms) */
        SDL_Delay(16);
    }

    return 0;
}