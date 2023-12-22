#include "draw.h"

void ClearWindow(void) {
    SDL_SetRenderDrawColor(app.renderer, 255, 255, 255, 255);
    SDL_RenderClear(app.renderer);

    return;
}

void ShowWindow(void) {
    SDL_RenderPresent(app.renderer);

    return;
}
void RenderEntity(Entity *object) {
     SDL_RenderCopy(app.renderer, object->texture, NULL, &(object->pos));

    return;
}

void DrawGame(void) {
    RenderEntity(&bg);
    RenderEntity(&circle);
    RenderEntity(&player);

    return;
}