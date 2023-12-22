#include "utils.h"

double Rotate_player(Entity *player) {
    double angle = 0.1;
    player -> angle += ANGULAR_SPEED;

    while (player -> angle >= 2*PI)
        player -> angle -= 2*PI;
    while (player -> angle < 0.0)
        player -> angle += 2*PI;

    double cosine = cos(player -> angle);
    double sine = sin(player -> angle);

    player -> pos.x = circle.pos.x + cosine * circle.radius;
    player -> pos.y = circle.pos.y + cosine * circle.radius;

    
    return player -> pos.x;
}

void Jump_player(void){
    
    distance = sqrt(pow((player.pos.x - circle.pos.x),2) + pow((player.pos.y - circle.pos.y),2));
    double player_tan_v = ANGULAR_SPEED*distance;
    double time = player.jump_speed/acceleration;
    double jump_distance = 2 * player_tan_v * time;

}

void Landing_player(Entity *player, double distance){
    
    double tan_radian=atan2(player -> pos.y, player -> pos.x);

    player -> pos.x = player -> pos.x + distance * cos(tan_radian);
    player -> pos.y = player -> pos.y + distance * sin(tan_radian); //새로운 위치
    
}

int CheckCollisionObjects(Entity *object_a, Entity *object_b) {

    if (SDL_HasIntersection(&(object_a->pos), &(object_b->pos))) {
        return 0;
    } else {
        return 1;
    }
}