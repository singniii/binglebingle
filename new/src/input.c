#include "input.h"


void GetInput(void) {
    SDL_Event event;

    /*SDL_PollEvent() 함수는 이벤트 큐에 남아 있는 이벤트를 가져옴*/
    while (SDL_PollEvent(&event)) {
        switch (event.type) {
            /*창닫기 버튼을 누른 경우*/
            case SDL_QUIT:
                QuitSDL(0);
                break;
            /*키보드 버튼을 뗐을 경우*/
            case SDL_KEYUP:
                ResponseKeyUp(&event.key);
                break;
            /*키보드 버튼을 눌렀을 경우*/
            case SDL_KEYDOWN:
                ResponseKeyDown(&event.key);
                break;
            default:
                break;
        }
    }
    return;
}


void ResponseKeyUp(SDL_KeyboardEvent *event) {
    if (event->repeat == 0) {
        SDL_Scancode key_input = event->keysym.scancode;
        switch (key_input) {
            case SDL_SCANCODE_SPACE:
                app.spacebar = 0;
                break;
        }
    }

    return;
}

void ResponseKeyDown(SDL_KeyboardEvent *event) {
    if (event->repeat == 0) {
        SDL_Scancode key_input = event->keysym.scancode;
        switch (key_input) {
            case SDL_SCANCODE_SPACE:
                app.spacebar = 1;
                break;
        }
    }

    return;
}