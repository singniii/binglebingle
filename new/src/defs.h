#ifndef DEFS_H
#define DEFS_H

#include "ctype.h"
#include "math.h"
#include "stdio.h"
#include "stdlib.h"
#include "string.h"
#include "time.h"

#include "SDL2/SDL.h"
#include "SDL2/SDL_image.h"
#include "SDL2/SDL_ttf.h"
#include "SDL2/SDL_mixer.h"


typedef struct {
    SDL_Renderer *renderer; /**< 렌더링 관리를 위한 구조체*/
    SDL_Window *window;     /**< 창 관리를 위한 구조체*/
    TTF_Font *font;         /**< 폰트 관리를 위한 구조체*/
    int spacebar;
} App;

typedef struct {
    double x;
    double y;
}Position; //vector

typedef struct {
    SDL_Texture * texture;
    SDL_Rect pos;          
    double jump_speed;
    double angle;
    int health; //체력 나타내는 변수. 1->생존, 0->사망
    double theta; //rad // for randering
    double radius;
} Entity;


typedef struct rect{
    Position offset;
    Position pos[4];
    Position r[4];
    Position vel;
    //double min_d;
}RECT;

typedef struct {
    SDL_Texture * texture;
    Position pos;
    double angle;
    int radius;
    SDL_Rect rect;
} Circle;


typedef struct {
    SDL_Rect pos;           /**< 직사각형 객체의 상태를 나타내기 위한 구조체
                                여기에 객체의 좌표, 위치 저장*/
    SDL_Color color;        /**< 글씨 색깔을 저장하는 구조체*/
    SDL_Surface *surface;   /**< 폰트 렌더링을 위해 필요한 구조체*/
    SDL_Texture *texture;   /**< 텍스쳐를 담고 있는 구조체 (문자열을 surface로 만들고,
                                그 후 texture에 저장)*/
} Text;

/*상수 매크로 정의*/
#define FPS 60              /**< 게임 FPS*/
#define BUFSIZE 1024        /**< 문자열 버퍼 크기*/
#define DEBUG_MODE 0



#define FEATURENUM 50
#define SCREEN_WIDTH 1200
#define SCREEN_HEIGHT 800

#define MAP_WIDTH 10000
#define MAP_HEIGHT 960

#define PLAYER_WIDTH 24     /**< 플레이어 객체 너비(픽셀)*/
#define PLAYER_HEIGHT 24    /**< 플레이어 객체 높이(픽셀)*/


#define PLAYER_SPEED 4      /**< 플레이어 객체 속도(단위시간당 이동량)*/
#define acceleration 10

#define ANGULAR_SPEED 4

#define CIRCLE1_POS_X  300
#define CIRCLE1_POS_Y  400



#define FONTSIZE 20         /**< 출력할 문자열 폰트 크기*/

#define LEFT_WALL 1         /**< 충돌 판정 시 왼쪽 벽을 나타내는 상수*/
#define RIGHT_WALL 2        /**< 충돌 판정 시 오른쪽 벽을 나타내는 상수*/
#define TOP_WALL 3          /**< 충돌 판정 시 위쪽 벽을 나타내는 상수*/
#define BOTTOM_WALL 4       /**< 충돌 판정 시 아래쪽 벽을 나타내는 상수*/

#define PI 3.141592



#endif