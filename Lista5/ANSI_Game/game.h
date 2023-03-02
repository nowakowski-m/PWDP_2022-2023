#include <iostream>
#include "kbhit.h"
#include "steering.h"
#include "background.h"
#include "road_types.h"
#include <chrono>
#include <time.h>

using namespace std;

void pobor(), game();

int game_lenght, difficulty_level, game_lenght_for_if, difficulty_level_for_if;

void score_show()
{
  printf("\033[%d;%dH", 18, 37); cout << "\x1b[30;101m \x1b[0m" << "\x1b[30;41m \x1b[0m" << "\x1b[30;101m \x1b[0m" << "\x1b[30;41m \x1b[0m" << "\x1b[30;101m                    \x1b[0m" << "\x1b[30;41m \x1b[0m" << "\x1b[30;101m \x1b[0m" << "\x1b[30;41m \x1b[0m" << "\x1b[30;101m \x1b[0m";
  printf("\033[%d;%dH", 19, 37); cout << "\x1b[30;41m \x1b[0m" << "\x1b[30;101m \x1b[0m" << "\x1b[30;41m \x1b[0m" << "\x1b[30;101m         Koniec      \x1b[0m" << "\x1b[30;101m \x1b[0m" << "\x1b[30;41m \x1b[0m" << "\x1b[30;101m \x1b[0m" << "\x1b[30;41m \x1b[0m";
  printf("\033[%d;%dH", 20, 37); cout << "\x1b[30;101m \x1b[0m" << "\x1b[30;41m \x1b[0m" << "\x1b[30;101m \x1b[0m" << "\x1b[30;41m \x1b[0m" << "\x1b[30;101m                    \x1b[0m" << "\x1b[30;41m \x1b[0m" << "\x1b[30;101m \x1b[0m" << "\x1b[30;41m \x1b[0m" << "\x1b[30;101m \x1b[0m";
  printf("\033[%d;%dH", 21, 37); cout << "\x1b[30;41m \x1b[0m" << "\x1b[30;101m \x1b[0m" << "\x1b[30;41m \x1b[0m" << "\x1b[30;101m       Wynik:        \x1b[0m" << "\x1b[30;101m \x1b[0m" << "\x1b[30;41m \x1b[0m" << "\x1b[30;101m \x1b[0m" << "\x1b[30;41m \x1b[0m";
  printf("\033[%d;%dH", 21, 54); cout << "\x1b[30;101m" << score << "\x1b[0m";
  printf("\033[%d;%dH", 22, 37); cout << "\x1b[30;101m \x1b[0m" << "\x1b[30;41m \x1b[0m" << "\x1b[30;101m \x1b[0m" << "\x1b[30;41m \x1b[0m" << "\x1b[30;101m                    \x1b[0m" << "\x1b[30;41m \x1b[0m" << "\x1b[30;101m \x1b[0m" << "\x1b[30;41m \x1b[0m" << "\x1b[30;101m \x1b[0m";
  printf("\033[%d;%dH", 1000, 0);
}


void game()
{
  x = 50;
  y = 38;

  game_bg();
  road_c();
  car();

  if ( game_lenght_for_if == 0 )
    game_lenght = 60;
  if ( game_lenght_for_if == 1 )
    game_lenght = 120;
  if ( game_lenght_for_if == 2 )
    game_lenght = 180;
  if ( difficulty_level_for_if == 0 )
    difficulty_level = 180;
  if ( difficulty_level_for_if == 1 )
    difficulty_level = 125;
  if ( difficulty_level_for_if == 2 )
    difficulty_level = 80;

  std::chrono::time_point start_moment = std::chrono::steady_clock::now();

  while ( z!=126 and ( std::chrono::steady_clock::now() - start_moment <= std::chrono::seconds(game_lenght) ) )
  {
    pobor();
    road_frame += 1;
    if (road_frame == 14)
      road_frame = 0;
    if (road_frame == 0)
      random_road = (time(NULL)) % 4;
  }
}

void pobor()
{
  time_t random_road;
  
  std::chrono::time_point start = std::chrono::steady_clock::now();

  while ( z != 126 )
  {
    while (kbhit())
    {
        input_take();
        game_bg();
        score_print();
        road_frame_for_kbhit();
        car();
    }

    if ( std::chrono::steady_clock::now() - start > std::chrono::milliseconds(difficulty_level) )
    {
        road_frame_for_time_gone();
        score_counting();
        break;
    }
  }
}