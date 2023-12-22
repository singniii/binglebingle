#include "init.h"
void InitSDL(void) {
    if (SDL_Init(SDL_INIT_VIDEO) < 0) {
        printf("[ERROR] in InitSDL(): %s", SDL_GetError());
        exit(1);
    }

    app.window = SDL_CreateWindow("Dodge!", SDL_WINDOWPOS_UNDEFINED,
                                  SDL_WINDOWPOS_UNDEFINED, SCREEN_WIDTH,
                                  SCREEN_HEIGHT, 0);
    SDL_SetHint(SDL_HINT_RENDER_SCALE_QUALITY, "linear");
    app.renderer = SDL_CreateRenderer(app.window, -1, SDL_RENDERER_ACCELERATED);
    IMG_Init(IMG_INIT_PNG | IMG_INIT_JPG);

    return;
}

void InitTTF(void) {
    if (TTF_Init() < 0) {
        printf("[ERROR] in InitTTF(): %s", SDL_GetError());
        exit(1);
    }

    app.font = TTF_OpenFont("./ttf/LiberationSans-Regular.ttf", 20);

    return;
}

void QuitSDL(int flag) {
    
    SDL_DestroyTexture(player.texture);
    SDL_DestroyTexture(bg.texture);
    
    SDL_FreeSurface(score_board.surface);
    SDL_DestroyTexture(game_over.texture);
    SDL_DestroyTexture(score_board.texture);
    
    SDL_DestroyRenderer(app.renderer);
    SDL_DestroyWindow(app.window);
    SDL_CloseAudio();

    QuitTTF();
    IMG_Quit();
    SDL_Quit();
    exit(flag);

    return;
}

void QuitTTF(void) {
    TTF_CloseFont(app.font);
    TTF_Quit();

    return;
}

void InitBG(void) {
    bg.texture = IMG_LoadTexture(app.renderer, "./gfx/bg.jpg");
    bg.pos.x = 0;
    bg.pos.y= 0;
    SDL_QueryTexture(bg.texture, NULL, NULL, &(bg.pos.w),
                     &(bg.pos.h));
}

void Initcircle(void) {
    circle.texture = IMG_LoadTexture(app.renderer, "./gfx/CIRCLE.png");
    circle.pos.x = 10;
    circle.pos.y= 10;
    circle.pos.w= 0.001;
    circle.pos.h= 0.001;
    SDL_QueryTexture(circle.texture, NULL, NULL, &(circle.pos.w),
                     &(circle.pos.h));
}


void InitPlayer(void) {
    player.texture = IMG_LoadTexture(app.renderer, "./gfx/Player.png");
    player.pos.x = SCREEN_WIDTH / 2;
    player.pos.y = SCREEN_HEIGHT / 2;
    player.health = 1;
    player.jump_speed = 4;
    SDL_QueryTexture(player.texture, NULL, NULL, &(player.pos.w),
                     &(player.pos.h));

    return;
}
