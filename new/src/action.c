#include "action.h"


void ActGame(void) {
    ActPlayer();
    ActCheckDeath();
    //ActScoreBoard();
    

    return;
}

void ActCheckDeath(void) {
    for(int i=0;i<10;i++){
        if (CheckCollisionObjects(&player, &circle)) {
            player.health = 0;
            //PlayDeathEffect();
            //Mix_PauseMusic();
            break;
        }
        }
    return;
}

void ActGameOver(void){
    //ActRankingBoard();
    //ActGameOverScreen();

    return;
}

void ActPlayer(void){
    Rotate_player(&player);

    if (app.spacebar == 1){
        player.jump_speed += 1;
        Jump_player();}

    if (app.spacebar == 0){
        Landing_player(&player, distance);
    }
    return;
} 


/*void ActScoreBoard(void) {
    char tmp[36];
    strcpy(score_text, "Score: ");
    SDL_itoa(SCORE, tmp, 10);
    strcat(score_text, tmp);
    score_board.surface =TTF_RenderText_Solid(app.font, score_text, score_board.color);
    score_board.texture =SDL_CreateTextureFromSurface(app.renderer, score_board.surface);
    return;
}*/