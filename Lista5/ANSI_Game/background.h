#include <iostream>
#include <stdio.h>
#include <unistd.h>

using namespace std;

int r_x, r_y, bg_h, w_bot, w_top;

void game_bg()
{
    bg_h = 1;
    w_top = 1;
    w_bot = 1;
    system("clear");
    while (bg_h <= 50)
    {
        while (w_top <= 46)
        {
            cout << "\x1b[44m \x1b[0m";
            w_top++;
        }
        bg_h++;
        w_top = 1;
    }

    bg_h = 1;

    while (bg_h <= 50)
    {
        while (w_bot <= 32)
        {
            cout << "\x1b[42m \x1b[0m";
            w_bot++;
        }
        bg_h++;
        w_bot = 1;
    };
}

void road_c()
{
    int color, color_1;
    color = 100;
    color_1 = 47;
    r_x = 32;
    r_y = 20;

    printf( "\033[%d;%dH",  (r_y + 4 ), (r_x) );   cout << "\x1b[40m \x1b[0m" << "\x1b[" << color << "m" << "                                    " << "\x1b[0m" << "\x1b[40m \x1b[0m";
    printf( "\033[%d;%dH",  (r_y + 5 ), (r_x)) ;   cout << "\x1b[40m \x1b[0m" << "\x1b[" << color_1 << "m" << "                                    " << "\x1b[0m" << "\x1b[40m \x1b[0m";
    printf( "\033[%d;%dH",  (r_y + 6 ), (r_x)) ;   cout << "\x1b[40m \x1b[0m" << "\x1b[" << color << "m" << "                                    " << "\x1b[0m" << "\x1b[40m \x1b[0m";
    printf( "\033[%d;%dH",  (r_y + 7 ), (r_x)) ;   cout << "\x1b[40m \x1b[0m" << "\x1b[" << color_1 << "m" << "                                    " << "\x1b[0m" << "\x1b[40m \x1b[0m";
    printf( "\033[%d;%dH",  (r_y + 8 ), (r_x -2 )) ;   cout << "\x1b[40m \x1b[0m" << "\x1b[" << color << "m" << "                                        " << "\x1b[0m" << "\x1b[40m \x1b[0m";
    printf( "\033[%d;%dH",  (r_y + 9 ), (r_x - 2)) ;   cout << "\x1b[40m \x1b[0m" << "\x1b[" << color_1 << "m" << "                                        " << "\x1b[0m" << "\x1b[40m \x1b[0m";
    printf( "\033[%d;%dH",  (r_y + 10 ), (r_x - 2)) ;   cout << "\x1b[40m \x1b[0m" << "\x1b[" << color << "m" << "                                        " << "\x1b[0m" << "\x1b[40m \x1b[0m";
    printf( "\033[%d;%dH",  (r_y + 11 ), (r_x - 2)) ;   cout << "\x1b[40m \x1b[0m" << "\x1b[" << color_1 << "m" << "                                        " << "\x1b[0m" << "\x1b[40m \x1b[0m";
    printf( "\033[%d;%dH",  (r_y + 12 ), (r_x - 4)) ;   cout << "\x1b[40m \x1b[0m" << "\x1b[" << color << "m" << "                                            " << "\x1b[0m" << "\x1b[40m \x1b[0m";
    printf( "\033[%d;%dH",  (r_y + 13 ), (r_x - 4)) ;   cout << "\x1b[40m \x1b[0m" << "\x1b[" << color_1 << "m" << "                                            " << "\x1b[0m" << "\x1b[40m \x1b[0m";
    printf( "\033[%d;%dH",  (r_y + 14 ), (r_x - 4)) ;   cout << "\x1b[40m \x1b[0m" << "\x1b[" << color << "m" << "                                            " << "\x1b[0m" << "\x1b[40m \x1b[0m";
    printf( "\033[%d;%dH",  (r_y + 15 ), (r_x - 4)) ;   cout << "\x1b[40m \x1b[0m" << "\x1b[" << color_1 << "m" << "                                            " << "\x1b[0m" << "\x1b[40m \x1b[0m";
    printf( "\033[%d;%dH",  (r_y + 16 ), (r_x - 6)) ;   cout << "\x1b[40m \x1b[0m" << "\x1b[" << color << "m" << "                                                " << "\x1b[0m" << "\x1b[40m \x1b[0m";
    printf( "\033[%d;%dH",  (r_y + 17 ), (r_x - 6)) ;   cout << "\x1b[40m \x1b[0m" << "\x1b[" << color_1 << "m" << "                                                " << "\x1b[0m" << "\x1b[40m \x1b[0m";
    printf( "\033[%d;%dH",  (r_y + 18 ), (r_x - 6)) ;   cout << "\x1b[40m \x1b[0m" << "\x1b[" << color << "m" << "                                                " << "\x1b[0m" << "\x1b[40m \x1b[0m";
    printf( "\033[%d;%dH",  (r_y + 19 ), (r_x - 6)) ;   cout << "\x1b[40m \x1b[0m" << "\x1b[" << color_1 << "m" << "                                                " << "\x1b[0m" << "\x1b[40m \x1b[0m";
}

void road_c1()
{
    int color, color_1;
    color = 100;
    color_1 = 47;
    r_x = 32;
    r_y = 20;

    printf( "\033[%d;%dH",  (r_y + 4 ), (r_x) );   cout << "\x1b[40m \x1b[0m" << "\x1b[" << color_1 << "m" << "                                    " << "\x1b[0m" << "\x1b[40m \x1b[0m";
    printf( "\033[%d;%dH",  (r_y + 5 ), (r_x)) ;   cout << "\x1b[40m \x1b[0m" << "\x1b[" << color << "m" << "                                    " << "\x1b[0m" << "\x1b[40m \x1b[0m";
    printf( "\033[%d;%dH",  (r_y + 6 ), (r_x)) ;   cout << "\x1b[40m \x1b[0m" << "\x1b[" << color_1 << "m" << "                                    " << "\x1b[0m" << "\x1b[40m \x1b[0m";
    printf( "\033[%d;%dH",  (r_y + 7 ), (r_x)) ;   cout << "\x1b[40m \x1b[0m" << "\x1b[" << color << "m" << "                                    " << "\x1b[0m" << "\x1b[40m \x1b[0m";
    printf( "\033[%d;%dH",  (r_y + 8 ), (r_x -2 )) ;   cout << "\x1b[40m \x1b[0m" << "\x1b[" << color_1 << "m" << "                                        " << "\x1b[0m" << "\x1b[40m \x1b[0m";
    printf( "\033[%d;%dH",  (r_y + 9 ), (r_x - 2)) ;   cout << "\x1b[40m \x1b[0m" << "\x1b[" << color << "m" << "                                        " << "\x1b[0m" << "\x1b[40m \x1b[0m";
    printf( "\033[%d;%dH",  (r_y + 10 ), (r_x - 2)) ;   cout << "\x1b[40m \x1b[0m" << "\x1b[" << color_1 << "m" << "                                        " << "\x1b[0m" << "\x1b[40m \x1b[0m";
    printf( "\033[%d;%dH",  (r_y + 11 ), (r_x - 2)) ;   cout << "\x1b[40m \x1b[0m" << "\x1b[" << color << "m" << "                                        " << "\x1b[0m" << "\x1b[40m \x1b[0m";
    printf( "\033[%d;%dH",  (r_y + 12 ), (r_x - 4)) ;   cout << "\x1b[40m \x1b[0m" << "\x1b[" << color_1 << "m" << "                                            " << "\x1b[0m" << "\x1b[40m \x1b[0m";
    printf( "\033[%d;%dH",  (r_y + 13 ), (r_x - 4)) ;   cout << "\x1b[40m \x1b[0m" << "\x1b[" << color << "m" << "                                            " << "\x1b[0m" << "\x1b[40m \x1b[0m";
    printf( "\033[%d;%dH",  (r_y + 14 ), (r_x - 4)) ;   cout << "\x1b[40m \x1b[0m" << "\x1b[" << color_1 << "m" << "                                            " << "\x1b[0m" << "\x1b[40m \x1b[0m";
    printf( "\033[%d;%dH",  (r_y + 15 ), (r_x - 4)) ;   cout << "\x1b[40m \x1b[0m" << "\x1b[" << color << "m" << "                                            " << "\x1b[0m" << "\x1b[40m \x1b[0m";
    printf( "\033[%d;%dH",  (r_y + 16 ), (r_x - 6)) ;   cout << "\x1b[40m \x1b[0m" << "\x1b[" << color_1 << "m" << "                                                " << "\x1b[0m" << "\x1b[40m \x1b[0m";
    printf( "\033[%d;%dH",  (r_y + 17 ), (r_x - 6)) ;   cout << "\x1b[40m \x1b[0m" << "\x1b[" << color << "m" << "                                                " << "\x1b[0m" << "\x1b[40m \x1b[0m";
    printf( "\033[%d;%dH",  (r_y + 18 ), (r_x - 6)) ;   cout << "\x1b[40m \x1b[0m" << "\x1b[" << color_1 << "m" << "                                                " << "\x1b[0m" << "\x1b[40m \x1b[0m";
    printf( "\033[%d;%dH",  (r_y + 19 ), (r_x - 6)) ;   cout << "\x1b[40m \x1b[0m" << "\x1b[" << color << "m" << "                                                " << "\x1b[0m" << "\x1b[40m \x1b[0m";
}

void road_r()
{
    int color, color_1;
    color = 100;
    color_1 = 47;
    r_x = 32;
    r_y = 20;

    printf( "\033[%d;%dH",  (r_y + 4 ), (r_x + 2) );   cout << "\x1b[40m \x1b[0m" << "\x1b[" << color << "m" << "                                    " << "\x1b[0m" << "\x1b[40m \x1b[0m";
    printf( "\033[%d;%dH",  (r_y + 5 ), (r_x + 2)) ;   cout << "\x1b[40m \x1b[0m" << "\x1b[" << color_1 << "m" << "                                    " << "\x1b[0m" << "\x1b[40m \x1b[0m";
    printf( "\033[%d;%dH",  (r_y + 6 ), (r_x + 2)) ;   cout << "\x1b[40m \x1b[0m" << "\x1b[" << color << "m" << "                                    " << "\x1b[0m" << "\x1b[40m \x1b[0m";
    printf( "\033[%d;%dH",  (r_y + 7 ), (r_x + 2)) ;   cout << "\x1b[40m \x1b[0m" << "\x1b[" << color_1 << "m" << "                                    " << "\x1b[0m" << "\x1b[40m \x1b[0m";
    printf( "\033[%d;%dH",  (r_y + 8 ), (r_x - 2)) ;   cout << "\x1b[40m \x1b[0m" << "\x1b[" << color << "m" << "                                          " << "\x1b[0m" << "\x1b[40m \x1b[0m";
    printf( "\033[%d;%dH",  (r_y + 9 ), (r_x - 2)) ;   cout << "\x1b[40m \x1b[0m" << "\x1b[" << color_1 << "m" << "                                          " << "\x1b[0m" << "\x1b[40m \x1b[0m";
    printf( "\033[%d;%dH",  (r_y + 10 ), (r_x - 2)) ;   cout << "\x1b[40m \x1b[0m" << "\x1b[" << color << "m" << "                                          " << "\x1b[0m" << "\x1b[40m \x1b[0m";
    printf( "\033[%d;%dH",  (r_y + 11 ), (r_x - 2)) ;   cout << "\x1b[40m \x1b[0m" << "\x1b[" << color_1 << "m" << "                                          " << "\x1b[0m" << "\x1b[40m \x1b[0m";
    printf( "\033[%d;%dH",  (r_y + 12 ), (r_x - 4)) ;   cout << "\x1b[40m \x1b[0m" << "\x1b[" << color << "m" << "                                              " << "\x1b[0m" << "\x1b[40m \x1b[0m";
    printf( "\033[%d;%dH",  (r_y + 13 ), (r_x - 4)) ;   cout << "\x1b[40m \x1b[0m" << "\x1b[" << color_1 << "m" << "                                              " << "\x1b[0m" << "\x1b[40m \x1b[0m";
    printf( "\033[%d;%dH",  (r_y + 14 ), (r_x - 4)) ;   cout << "\x1b[40m \x1b[0m" << "\x1b[" << color << "m" << "                                              " << "\x1b[0m" << "\x1b[40m \x1b[0m";
    printf( "\033[%d;%dH",  (r_y + 15 ), (r_x - 4)) ;   cout << "\x1b[40m \x1b[0m" << "\x1b[" << color_1 << "m" << "                                              " << "\x1b[0m" << "\x1b[40m \x1b[0m";
    printf( "\033[%d;%dH",  (r_y + 16 ), (r_x - 6)) ;   cout << "\x1b[40m \x1b[0m" << "\x1b[" << color << "m" << "                                                " << "\x1b[0m" << "\x1b[40m \x1b[0m";
    printf( "\033[%d;%dH",  (r_y + 17 ), (r_x - 6)) ;   cout << "\x1b[40m \x1b[0m" << "\x1b[" << color_1 << "m" << "                                                " << "\x1b[0m" << "\x1b[40m \x1b[0m";
    printf( "\033[%d;%dH",  (r_y + 18 ), (r_x - 6)) ;   cout << "\x1b[40m \x1b[0m" << "\x1b[" << color << "m" << "                                                " << "\x1b[0m" << "\x1b[40m \x1b[0m";
    printf( "\033[%d;%dH",  (r_y + 19 ), (r_x - 6)) ;   cout << "\x1b[40m \x1b[0m" << "\x1b[" << color_1 << "m" << "                                                " << "\x1b[0m" << "\x1b[40m \x1b[0m";
}

void road_r1()
{
    int color, color_1;
    color = 100;
    color_1 = 47;
    r_x = 36;
    r_y = 20;

    printf( "\033[%d;%dH",  (r_y + 4 ), (r_x + 4) );   cout << "\x1b[40m \x1b[0m" << "\x1b[" << color << "m" << "                                    " << "\x1b[0m" << "\x1b[40m \x1b[0m";
    printf( "\033[%d;%dH",  (r_y + 5 ), (r_x + 4)) ;   cout << "\x1b[40m \x1b[0m" << "\x1b[" << color_1 << "m" << "                                    " << "\x1b[0m" << "\x1b[40m \x1b[0m";
    printf( "\033[%d;%dH",  (r_y + 6 ), (r_x + 4)) ;   cout << "\x1b[40m \x1b[0m" << "\x1b[" << color << "m" << "                                    " << "\x1b[0m" << "\x1b[40m \x1b[0m";
    printf( "\033[%d;%dH",  (r_y + 7 ), (r_x + 4)) ;   cout << "\x1b[40m \x1b[0m" << "\x1b[" << color_1 << "m" << "                                    " << "\x1b[0m" << "\x1b[40m \x1b[0m";
    printf( "\033[%d;%dH",  (r_y + 8 ), (r_x -2 )) ;   cout << "\x1b[40m \x1b[0m" << "\x1b[" << color << "m" << "                                            " << "\x1b[0m" << "\x1b[40m \x1b[0m";
    printf( "\033[%d;%dH",  (r_y + 9 ), (r_x - 2)) ;   cout << "\x1b[40m \x1b[0m" << "\x1b[" << color_1 << "m" << "                                            " << "\x1b[0m" << "\x1b[40m \x1b[0m";
    printf( "\033[%d;%dH",  (r_y + 10 ), (r_x - 2)) ;   cout << "\x1b[40m \x1b[0m" << "\x1b[" << color << "m" << "                                            " << "\x1b[0m" << "\x1b[40m \x1b[0m";
    printf( "\033[%d;%dH",  (r_y + 11 ), (r_x - 2)) ;   cout << "\x1b[40m \x1b[0m" << "\x1b[" << color_1 << "m" << "                                            " << "\x1b[0m" << "\x1b[40m \x1b[0m";
    printf( "\033[%d;%dH",  (r_y + 12 ), (r_x - 4)) ;   cout << "\x1b[40m \x1b[0m" << "\x1b[" << color << "m" << "                                                " << "\x1b[0m" << "\x1b[40m \x1b[0m";
    printf( "\033[%d;%dH",  (r_y + 13 ), (r_x - 4)) ;   cout << "\x1b[40m \x1b[0m" << "\x1b[" << color_1 << "m" << "                                                " << "\x1b[0m" << "\x1b[40m \x1b[0m";
    printf( "\033[%d;%dH",  (r_y + 14 ), (r_x - 4)) ;   cout << "\x1b[40m \x1b[0m" << "\x1b[" << color << "m" << "                                                " << "\x1b[0m" << "\x1b[40m \x1b[0m";
    printf( "\033[%d;%dH",  (r_y + 15 ), (r_x - 4)) ;   cout << "\x1b[40m \x1b[0m" << "\x1b[" << color_1 << "m" << "                                                " << "\x1b[0m" << "\x1b[40m \x1b[0m";
    printf( "\033[%d;%dH",  (r_y + 16 ), (r_x - 6)) ;   cout << "\x1b[40m \x1b[0m" << "\x1b[" << color << "m" << "                                                " << "\x1b[0m" << "\x1b[40m \x1b[0m";
    printf( "\033[%d;%dH",  (r_y + 17 ), (r_x - 6)) ;   cout << "\x1b[40m \x1b[0m" << "\x1b[" << color_1 << "m" << "                                                " << "\x1b[0m" << "\x1b[40m \x1b[0m";
    printf( "\033[%d;%dH",  (r_y + 18 ), (r_x - 6)) ;   cout << "\x1b[40m \x1b[0m" << "\x1b[" << color << "m" << "                                                " << "\x1b[0m" << "\x1b[40m \x1b[0m";
    printf( "\033[%d;%dH",  (r_y + 19 ), (r_x - 6)) ;   cout << "\x1b[40m \x1b[0m" << "\x1b[" << color_1 << "m" << "                                                " << "\x1b[0m" << "\x1b[40m \x1b[0m";
}

void road_r2()
{
    int color, color_1;
    color = 100;
    color_1 = 47;
    r_x = 40;
    r_y = 20;

    printf( "\033[%d;%dH",  (r_y + 4 ), (r_x + 3) );   cout << "\x1b[40m \x1b[0m" << "\x1b[" << color_1 << "m" << "                                    " << "\x1b[0m" << "\x1b[40m \x1b[0m";
    printf( "\033[%d;%dH",  (r_y + 5 ), (r_x + 3)) ;   cout << "\x1b[40m \x1b[0m" << "\x1b[" << color << "m" << "                                    " << "\x1b[0m" << "\x1b[40m \x1b[0m";
    printf( "\033[%d;%dH",  (r_y + 6 ), (r_x + 3)) ;   cout << "\x1b[40m \x1b[0m" << "\x1b[" << color_1 << "m" << "                                    " << "\x1b[0m" << "\x1b[40m \x1b[0m";
    printf( "\033[%d;%dH",  (r_y + 7 ), (r_x + 3)) ;   cout << "\x1b[40m \x1b[0m" << "\x1b[" << color << "m" << "                                    " << "\x1b[0m" << "\x1b[40m \x1b[0m";
    printf( "\033[%d;%dH",  (r_y + 8 ), (r_x -2 )) ;   cout << "\x1b[40m \x1b[0m" << "\x1b[" << color_1 << "m" << "                                              " << "\x1b[0m" << "\x1b[40m \x1b[0m";
    printf( "\033[%d;%dH",  (r_y + 9 ), (r_x - 2)) ;   cout << "\x1b[40m \x1b[0m" << "\x1b[" << color << "m" << "                                              " << "\x1b[0m" << "\x1b[40m \x1b[0m";
    printf( "\033[%d;%dH",  (r_y + 10 ), (r_x - 2)) ;   cout << "\x1b[40m \x1b[0m" << "\x1b[" << color_1 << "m" << "                                              " << "\x1b[0m" << "\x1b[40m \x1b[0m";
    printf( "\033[%d;%dH",  (r_y + 11 ), (r_x - 2)) ;   cout << "\x1b[40m \x1b[0m" << "\x1b[" << color << "m" << "                                              " << "\x1b[0m" << "\x1b[40m \x1b[0m";
    printf( "\033[%d;%dH",  (r_y + 12 ), (r_x - 4)) ;   cout << "\x1b[40m \x1b[0m" << "\x1b[" << color_1 << "m" << "                                                " << "\x1b[0m" << "\x1b[40m \x1b[0m";
    printf( "\033[%d;%dH",  (r_y + 13 ), (r_x - 4)) ;   cout << "\x1b[40m \x1b[0m" << "\x1b[" << color << "m" << "                                                " << "\x1b[0m" << "\x1b[40m \x1b[0m";
    printf( "\033[%d;%dH",  (r_y + 14 ), (r_x - 4)) ;   cout << "\x1b[40m \x1b[0m" << "\x1b[" << color_1 << "m" << "                                                " << "\x1b[0m" << "\x1b[40m \x1b[0m";
    printf( "\033[%d;%dH",  (r_y + 15 ), (r_x - 4)) ;   cout << "\x1b[40m \x1b[0m" << "\x1b[" << color << "m" << "                                                " << "\x1b[0m" << "\x1b[40m \x1b[0m";
    printf( "\033[%d;%dH",  (r_y + 16 ), (r_x - 6)) ;   cout << "\x1b[40m \x1b[0m" << "\x1b[" << color_1 << "m" << "                                                " << "\x1b[0m" << "\x1b[40m \x1b[0m";
    printf( "\033[%d;%dH",  (r_y + 17 ), (r_x - 6)) ;   cout << "\x1b[40m \x1b[0m" << "\x1b[" << color << "m" << "                                                " << "\x1b[0m" << "\x1b[40m \x1b[0m";
    printf( "\033[%d;%dH",  (r_y + 18 ), (r_x - 6)) ;   cout << "\x1b[40m \x1b[0m" << "\x1b[" << color_1 << "m" << "                                                " << "\x1b[0m" << "\x1b[40m \x1b[0m";
    printf( "\033[%d;%dH",  (r_y + 19 ), (r_x - 6)) ;   cout << "\x1b[40m \x1b[0m" << "\x1b[" << color << "m" << "                                                " << "\x1b[0m" << "\x1b[40m \x1b[0m";
}

void road_r3()
{
    int color, color_1;
    color = 100;
    color_1 = 47;
    r_x = 44;
    r_y = 20;

    printf( "\033[%d;%dH",  (r_y + 4 ), (r_x + 4) );   cout << "\x1b[40m \x1b[0m" << "\x1b[" << color_1 << "m" << "                                    " << "\x1b[0m" << "\x1b[40m \x1b[0m";
    printf( "\033[%d;%dH",  (r_y + 5 ), (r_x + 4)) ;   cout << "\x1b[40m \x1b[0m" << "\x1b[" << color << "m" << "                                    " << "\x1b[0m" << "\x1b[40m \x1b[0m";
    printf( "\033[%d;%dH",  (r_y + 6 ), (r_x + 4)) ;   cout << "\x1b[40m \x1b[0m" << "\x1b[" << color_1 << "m" << "                                    " << "\x1b[0m" << "\x1b[40m \x1b[0m";
    printf( "\033[%d;%dH",  (r_y + 7 ), (r_x + 4)) ;   cout << "\x1b[40m \x1b[0m" << "\x1b[" << color << "m" << "                                    " << "\x1b[0m" << "\x1b[40m \x1b[0m";
    printf( "\033[%d;%dH",  (r_y + 8 ), (r_x -2 )) ;   cout << "\x1b[40m \x1b[0m" << "\x1b[" << color_1 << "m" << "                                                " << "\x1b[0m" << "\x1b[40m \x1b[0m";
    printf( "\033[%d;%dH",  (r_y + 9 ), (r_x - 2)) ;   cout << "\x1b[40m \x1b[0m" << "\x1b[" << color << "m" << "                                                " << "\x1b[0m" << "\x1b[40m \x1b[0m";
    printf( "\033[%d;%dH",  (r_y + 10 ), (r_x - 2)) ;   cout << "\x1b[40m \x1b[0m" << "\x1b[" << color_1 << "m" << "                                                " << "\x1b[0m" << "\x1b[40m \x1b[0m";
    printf( "\033[%d;%dH",  (r_y + 11 ), (r_x - 2)) ;   cout << "\x1b[40m \x1b[0m" << "\x1b[" << color << "m" << "                                                " << "\x1b[0m" << "\x1b[40m \x1b[0m";
    printf( "\033[%d;%dH",  (r_y + 12 ), (r_x - 4)) ;   cout << "\x1b[40m \x1b[0m" << "\x1b[" << color_1 << "m" << "                                                " << "\x1b[0m" << "\x1b[40m \x1b[0m";
    printf( "\033[%d;%dH",  (r_y + 13 ), (r_x - 4)) ;   cout << "\x1b[40m \x1b[0m" << "\x1b[" << color << "m" << "                                                " << "\x1b[0m" << "\x1b[40m \x1b[0m";
    printf( "\033[%d;%dH",  (r_y + 14 ), (r_x - 4)) ;   cout << "\x1b[40m \x1b[0m" << "\x1b[" << color_1 << "m" << "                                                " << "\x1b[0m" << "\x1b[40m \x1b[0m";
    printf( "\033[%d;%dH",  (r_y + 15 ), (r_x - 4)) ;   cout << "\x1b[40m \x1b[0m" << "\x1b[" << color << "m" << "                                                " << "\x1b[0m" << "\x1b[40m \x1b[0m";
    printf( "\033[%d;%dH",  (r_y + 16 ), (r_x - 6)) ;   cout << "\x1b[40m \x1b[0m" << "\x1b[" << color_1 << "m" << "                                                " << "\x1b[0m" << "\x1b[40m \x1b[0m";
    printf( "\033[%d;%dH",  (r_y + 17 ), (r_x - 6)) ;   cout << "\x1b[40m \x1b[0m" << "\x1b[" << color << "m" << "                                                " << "\x1b[0m" << "\x1b[40m \x1b[0m";
    printf( "\033[%d;%dH",  (r_y + 18 ), (r_x - 6)) ;   cout << "\x1b[40m \x1b[0m" << "\x1b[" << color_1 << "m" << "                                                " << "\x1b[0m" << "\x1b[40m \x1b[0m";
    printf( "\033[%d;%dH",  (r_y + 19 ), (r_x - 6)) ;   cout << "\x1b[40m \x1b[0m" << "\x1b[" << color << "m" << "                                                " << "\x1b[0m" << "\x1b[40m \x1b[0m";
}

void road_r4()
{
    int color, color_1;
    color = 100;
    color_1 = 47;
    r_x = 48;
    r_y = 20;

    printf( "\033[%d;%dH",  (r_y + 4 ), (r_x + 6) );   cout << "\x1b[40m \x1b[0m" << "\x1b[" << color << "m" << "                                    " << "\x1b[0m" << "\x1b[40m \x1b[0m";
    printf( "\033[%d;%dH",  (r_y + 5 ), (r_x + 6)) ;   cout << "\x1b[40m \x1b[0m" << "\x1b[" << color_1 << "m" << "                                    " << "\x1b[0m" << "\x1b[40m \x1b[0m";
    printf( "\033[%d;%dH",  (r_y + 6 ), (r_x + 6)) ;   cout << "\x1b[40m \x1b[0m" << "\x1b[" << color << "m" << "                                    " << "\x1b[0m" << "\x1b[40m \x1b[0m";
    printf( "\033[%d;%dH",  (r_y + 7 ), (r_x + 6)) ;   cout << "\x1b[40m \x1b[0m" << "\x1b[" << color_1 << "m" << "                                    " << "\x1b[0m" << "\x1b[40m \x1b[0m";
    printf( "\033[%d;%dH",  (r_y + 8 ), (r_x -0)) ;   cout << "\x1b[40m \x1b[0m" << "\x1b[" << color << "m" << "                                            " << "\x1b[0m" << "\x1b[40m \x1b[0m";
    printf( "\033[%d;%dH",  (r_y + 9 ), (r_x - 0)) ;   cout << "\x1b[40m \x1b[0m" << "\x1b[" << color_1 << "m" << "                                            " << "\x1b[0m" << "\x1b[40m \x1b[0m";
    printf( "\033[%d;%dH",  (r_y + 10 ), (r_x - 0)) ;   cout << "\x1b[40m \x1b[0m" << "\x1b[" << color << "m" << "                                            " << "\x1b[0m" << "\x1b[40m \x1b[0m";
    printf( "\033[%d;%dH",  (r_y + 11 ), (r_x - 0)) ;   cout << "\x1b[40m \x1b[0m" << "\x1b[" << color_1 << "m" << "                                            " << "\x1b[0m" << "\x1b[40m \x1b[0m";
    printf( "\033[%d;%dH",  (r_y + 12 ), (r_x - 4)) ;   cout << "\x1b[40m \x1b[0m" << "\x1b[" << color << "m" << "                                                " << "\x1b[0m" << "\x1b[40m \x1b[0m";
    printf( "\033[%d;%dH",  (r_y + 13 ), (r_x - 4)) ;   cout << "\x1b[40m \x1b[0m" << "\x1b[" << color_1 << "m" << "                                                " << "\x1b[0m" << "\x1b[40m \x1b[0m";
    printf( "\033[%d;%dH",  (r_y + 14 ), (r_x - 4)) ;   cout << "\x1b[40m \x1b[0m" << "\x1b[" << color << "m" << "                                                " << "\x1b[0m" << "\x1b[40m \x1b[0m";
    printf( "\033[%d;%dH",  (r_y + 15 ), (r_x - 4)) ;   cout << "\x1b[40m \x1b[0m" << "\x1b[" << color_1 << "m" << "                                                " << "\x1b[0m" << "\x1b[40m \x1b[0m";
    printf( "\033[%d;%dH",  (r_y + 16 ), (r_x - 6)) ;   cout << "\x1b[40m \x1b[0m" << "\x1b[" << color << "m" << "                                                " << "\x1b[0m" << "\x1b[40m \x1b[0m";
    printf( "\033[%d;%dH",  (r_y + 17 ), (r_x - 6)) ;   cout << "\x1b[40m \x1b[0m" << "\x1b[" << color_1 << "m" << "                                                " << "\x1b[0m" << "\x1b[40m \x1b[0m";
    printf( "\033[%d;%dH",  (r_y + 18 ), (r_x - 6)) ;   cout << "\x1b[40m \x1b[0m" << "\x1b[" << color << "m" << "                                                " << "\x1b[0m" << "\x1b[40m \x1b[0m";
    printf( "\033[%d;%dH",  (r_y + 19 ), (r_x - 6)) ;   cout << "\x1b[40m \x1b[0m" << "\x1b[" << color_1 << "m" << "                                                " << "\x1b[0m" << "\x1b[40m \x1b[0m";
}

void road_r5()
{
    int color, color_1;
    color = 100;
    color_1 = 47;
    r_x = 48;
    r_y = 20;

    printf( "\033[%d;%dH",  (r_y + 4 ), (r_x + 4) );   cout << "\x1b[40m \x1b[0m" << "\x1b[" << color << "m" << "                                    " << "\x1b[0m" << "\x1b[40m \x1b[0m";
    printf( "\033[%d;%dH",  (r_y + 5 ), (r_x + 4)) ;   cout << "\x1b[40m \x1b[0m" << "\x1b[" << color_1 << "m" << "                                    " << "\x1b[0m" << "\x1b[40m \x1b[0m";
    printf( "\033[%d;%dH",  (r_y + 6 ), (r_x + 4)) ;   cout << "\x1b[40m \x1b[0m" << "\x1b[" << color << "m" << "                                    " << "\x1b[0m" << "\x1b[40m \x1b[0m";
    printf( "\033[%d;%dH",  (r_y + 7 ), (r_x + 4)) ;   cout << "\x1b[40m \x1b[0m" << "\x1b[" << color_1 << "m" << "                                    " << "\x1b[0m" << "\x1b[40m \x1b[0m";
    printf( "\033[%d;%dH",  (r_y + 8 ), (r_x -0 )) ;   cout << "\x1b[40m \x1b[0m" << "\x1b[" << color << "m" << "                                          " << "\x1b[0m" << "\x1b[40m \x1b[0m";
    printf( "\033[%d;%dH",  (r_y + 9 ), (r_x - 0)) ;   cout << "\x1b[40m \x1b[0m" << "\x1b[" << color_1 << "m" << "                                          " << "\x1b[0m" << "\x1b[40m \x1b[0m";
    printf( "\033[%d;%dH",  (r_y + 10 ), (r_x - 0)) ;   cout << "\x1b[40m \x1b[0m" << "\x1b[" << color << "m" << "                                          " << "\x1b[0m" << "\x1b[40m \x1b[0m";
    printf( "\033[%d;%dH",  (r_y + 11 ), (r_x - 0)) ;   cout << "\x1b[40m \x1b[0m" << "\x1b[" << color_1 << "m" << "                                          " << "\x1b[0m" << "\x1b[40m \x1b[0m";
    printf( "\033[%d;%dH",  (r_y + 12 ), (r_x - 4)) ;   cout << "\x1b[40m \x1b[0m" << "\x1b[" << color << "m" << "                                                " << "\x1b[0m" << "\x1b[40m \x1b[0m";
    printf( "\033[%d;%dH",  (r_y + 13 ), (r_x - 4)) ;   cout << "\x1b[40m \x1b[0m" << "\x1b[" << color_1 << "m" << "                                                " << "\x1b[0m" << "\x1b[40m \x1b[0m";
    printf( "\033[%d;%dH",  (r_y + 14 ), (r_x - 4)) ;   cout << "\x1b[40m \x1b[0m" << "\x1b[" << color << "m" << "                                                " << "\x1b[0m" << "\x1b[40m \x1b[0m";
    printf( "\033[%d;%dH",  (r_y + 15 ), (r_x - 4)) ;   cout << "\x1b[40m \x1b[0m" << "\x1b[" << color_1 << "m" << "                                                " << "\x1b[0m" << "\x1b[40m \x1b[0m";
    printf( "\033[%d;%dH",  (r_y + 16 ), (r_x - 6)) ;   cout << "\x1b[40m \x1b[0m" << "\x1b[" << color << "m" << "                                                " << "\x1b[0m" << "\x1b[40m \x1b[0m";
    printf( "\033[%d;%dH",  (r_y + 17 ), (r_x - 6)) ;   cout << "\x1b[40m \x1b[0m" << "\x1b[" << color_1 << "m" << "                                                " << "\x1b[0m" << "\x1b[40m \x1b[0m";
    printf( "\033[%d;%dH",  (r_y + 18 ), (r_x - 6)) ;   cout << "\x1b[40m \x1b[0m" << "\x1b[" << color << "m" << "                                                " << "\x1b[0m" << "\x1b[40m \x1b[0m";
    printf( "\033[%d;%dH",  (r_y + 19 ), (r_x - 6)) ;   cout << "\x1b[40m \x1b[0m" << "\x1b[" << color_1 << "m" << "                                                " << "\x1b[0m" << "\x1b[40m \x1b[0m";
}

void road_l()
{
    int color, color_1;
    color = 100;
    color_1 = 47;
    r_x = 32;
    r_y = 20;

    printf( "\033[%d;%dH",  (r_y + 4 ), (r_x - 2));   cout << "\x1b[40m \x1b[0m" << "\x1b[" << color << "m" << "                                    " << "\x1b[0m" << "\x1b[40m \x1b[0m";
    printf( "\033[%d;%dH",  (r_y + 5 ), (r_x - 2)) ;   cout << "\x1b[40m \x1b[0m" << "\x1b[" << color_1 << "m" << "                                    " << "\x1b[0m" << "\x1b[40m \x1b[0m";
    printf( "\033[%d;%dH",  (r_y + 6 ), (r_x - 2)) ;   cout << "\x1b[40m \x1b[0m" << "\x1b[" << color << "m" << "                                    " << "\x1b[0m" << "\x1b[40m \x1b[0m";
    printf( "\033[%d;%dH",  (r_y + 7 ), (r_x - 2)) ;   cout << "\x1b[40m \x1b[0m" << "\x1b[" << color_1 << "m" << "                                    " << "\x1b[0m" << "\x1b[40m \x1b[0m";
    printf( "\033[%d;%dH",  (r_y + 8 ), (r_x - 4 )) ;   cout << "\x1b[40m \x1b[0m" << "\x1b[" << color << "m" << "                                          " << "\x1b[0m" << "\x1b[40m \x1b[0m";
    printf( "\033[%d;%dH",  (r_y + 9 ), (r_x - 4)) ;   cout << "\x1b[40m \x1b[0m" << "\x1b[" << color_1 << "m" << "                                          " << "\x1b[0m" << "\x1b[40m \x1b[0m";
    printf( "\033[%d;%dH",  (r_y + 10 ), (r_x - 4)) ;   cout << "\x1b[40m \x1b[0m" << "\x1b[" << color << "m" << "                                          " << "\x1b[0m" << "\x1b[40m \x1b[0m";
    printf( "\033[%d;%dH",  (r_y + 11 ), (r_x - 4)) ;   cout << "\x1b[40m \x1b[0m" << "\x1b[" << color_1 << "m" << "                                          " << "\x1b[0m" << "\x1b[40m \x1b[0m";
    printf( "\033[%d;%dH",  (r_y + 12 ), (r_x - 6)) ;   cout << "\x1b[40m \x1b[0m" << "\x1b[" << color << "m" << "                                              " << "\x1b[0m" << "\x1b[40m \x1b[0m";
    printf( "\033[%d;%dH",  (r_y + 13 ), (r_x - 6)) ;   cout << "\x1b[40m \x1b[0m" << "\x1b[" << color_1 << "m" << "                                              " << "\x1b[0m" << "\x1b[40m \x1b[0m";
    printf( "\033[%d;%dH",  (r_y + 14 ), (r_x - 6)) ;   cout << "\x1b[40m \x1b[0m" << "\x1b[" << color << "m" << "                                              " << "\x1b[0m" << "\x1b[40m \x1b[0m";
    printf( "\033[%d;%dH",  (r_y + 15 ), (r_x - 6)) ;   cout << "\x1b[40m \x1b[0m" << "\x1b[" << color_1 << "m" << "                                              " << "\x1b[0m" << "\x1b[40m \x1b[0m";
    printf( "\033[%d;%dH",  (r_y + 16 ), (r_x - 6)) ;   cout << "\x1b[40m \x1b[0m" << "\x1b[" << color << "m" << "                                                " << "\x1b[0m" << "\x1b[40m \x1b[0m";
    printf( "\033[%d;%dH",  (r_y + 17 ), (r_x - 6)) ;   cout << "\x1b[40m \x1b[0m" << "\x1b[" << color_1 << "m" << "                                                " << "\x1b[0m" << "\x1b[40m \x1b[0m";
    printf( "\033[%d;%dH",  (r_y + 18 ), (r_x - 6)) ;   cout << "\x1b[40m \x1b[0m" << "\x1b[" << color << "m" << "                                                " << "\x1b[0m" << "\x1b[40m \x1b[0m";
    printf( "\033[%d;%dH",  (r_y + 19 ), (r_x - 6)) ;   cout << "\x1b[40m \x1b[0m" << "\x1b[" << color_1 << "m" << "                                                " << "\x1b[0m" << "\x1b[40m \x1b[0m";
}

void road_l1()
{
    int color, color_1;
    color = 100;
    color_1 = 47;
    r_x = 28;
    r_y = 20;

    printf( "\033[%d;%dH",  (r_y + 4 ), (r_x - 2));   cout << "\x1b[40m \x1b[0m" << "\x1b[" << color << "m" << "                                    " << "\x1b[0m" << "\x1b[40m \x1b[0m";
    printf( "\033[%d;%dH",  (r_y + 5 ), (r_x - 2)) ;   cout << "\x1b[40m \x1b[0m" << "\x1b[" << color_1 << "m" << "                                    " << "\x1b[0m" << "\x1b[40m \x1b[0m";
    printf( "\033[%d;%dH",  (r_y + 6 ), (r_x - 2)) ;   cout << "\x1b[40m \x1b[0m" << "\x1b[" << color << "m" << "                                    " << "\x1b[0m" << "\x1b[40m \x1b[0m";
    printf( "\033[%d;%dH",  (r_y + 7 ), (r_x - 2)) ;   cout << "\x1b[40m \x1b[0m" << "\x1b[" << color_1 << "m" << "                                    " << "\x1b[0m" << "\x1b[40m \x1b[0m";
    printf( "\033[%d;%dH",  (r_y + 8 ), (r_x - 4 )) ;   cout << "\x1b[40m \x1b[0m" << "\x1b[" << color << "m" << "                                          " << "\x1b[0m" << "\x1b[40m \x1b[0m";
    printf( "\033[%d;%dH",  (r_y + 9 ), (r_x - 4)) ;   cout << "\x1b[40m \x1b[0m" << "\x1b[" << color_1 << "m" << "                                          " << "\x1b[0m" << "\x1b[40m \x1b[0m";
    printf( "\033[%d;%dH",  (r_y + 10 ), (r_x - 4)) ;   cout << "\x1b[40m \x1b[0m" << "\x1b[" << color << "m" << "                                          " << "\x1b[0m" << "\x1b[40m \x1b[0m";
    printf( "\033[%d;%dH",  (r_y + 11 ), (r_x - 4)) ;   cout << "\x1b[40m \x1b[0m" << "\x1b[" << color_1 << "m" << "                                          " << "\x1b[0m" << "\x1b[40m \x1b[0m";
    printf( "\033[%d;%dH",  (r_y + 12 ), (r_x - 6)) ;   cout << "\x1b[40m \x1b[0m" << "\x1b[" << color << "m" << "                                              " << "\x1b[0m" << "\x1b[40m \x1b[0m";
    printf( "\033[%d;%dH",  (r_y + 13 ), (r_x - 6)) ;   cout << "\x1b[40m \x1b[0m" << "\x1b[" << color_1 << "m" << "                                              " << "\x1b[0m" << "\x1b[40m \x1b[0m";
    printf( "\033[%d;%dH",  (r_y + 14 ), (r_x - 6)) ;   cout << "\x1b[40m \x1b[0m" << "\x1b[" << color << "m" << "                                              " << "\x1b[0m" << "\x1b[40m \x1b[0m";
    printf( "\033[%d;%dH",  (r_y + 15 ), (r_x - 6)) ;   cout << "\x1b[40m \x1b[0m" << "\x1b[" << color_1 << "m" << "                                              " << "\x1b[0m" << "\x1b[40m \x1b[0m";
    printf( "\033[%d;%dH",  (r_y + 16 ), (r_x - 4)) ;   cout << "\x1b[40m \x1b[0m" << "\x1b[" << color << "m" << "                                              " << "\x1b[0m" << "\x1b[40m \x1b[0m";
    printf( "\033[%d;%dH",  (r_y + 17 ), (r_x - 4)) ;   cout << "\x1b[40m \x1b[0m" << "\x1b[" << color_1 << "m" << "                                              " << "\x1b[0m" << "\x1b[40m \x1b[0m";
    printf( "\033[%d;%dH",  (r_y + 18 ), (r_x - 4)) ;   cout << "\x1b[40m \x1b[0m" << "\x1b[" << color << "m" << "                                              " << "\x1b[0m" << "\x1b[40m \x1b[0m";
    printf( "\033[%d;%dH",  (r_y + 19 ), (r_x - 4)) ;   cout << "\x1b[40m \x1b[0m" << "\x1b[" << color_1 << "m" << "                                              " << "\x1b[0m" << "\x1b[40m \x1b[0m";
}

void road_l2()
{
    int color, color_1;
    color = 100;
    color_1 = 47;
    r_x = 24;
    r_y = 20;

    printf( "\033[%d;%dH",  (r_y + 4 ), (r_x - 4));   cout << "\x1b[40m \x1b[0m" << "\x1b[" << color_1 << "m" << "                                    " << "\x1b[0m" << "\x1b[40m \x1b[0m";
    printf( "\033[%d;%dH",  (r_y + 5 ), (r_x - 4)) ;   cout << "\x1b[40m \x1b[0m" << "\x1b[" << color << "m" << "                                    " << "\x1b[0m" << "\x1b[40m \x1b[0m";
    printf( "\033[%d;%dH",  (r_y + 6 ), (r_x - 4)) ;   cout << "\x1b[40m \x1b[0m" << "\x1b[" << color_1 << "m" << "                                    " << "\x1b[0m" << "\x1b[40m \x1b[0m";
    printf( "\033[%d;%dH",  (r_y + 7 ), (r_x - 4)) ;   cout << "\x1b[40m \x1b[0m" << "\x1b[" << color << "m" << "                                    " << "\x1b[0m" << "\x1b[40m \x1b[0m";
    printf( "\033[%d;%dH",  (r_y + 8 ), (r_x - 6 )) ;   cout << "\x1b[40m \x1b[0m" << "\x1b[" << color_1 << "m" << "                                            " << "\x1b[0m" << "\x1b[40m \x1b[0m";
    printf( "\033[%d;%dH",  (r_y + 9 ), (r_x - 6)) ;   cout << "\x1b[40m \x1b[0m" << "\x1b[" << color << "m" << "                                            " << "\x1b[0m" << "\x1b[40m \x1b[0m";
    printf( "\033[%d;%dH",  (r_y + 10 ), (r_x - 6)) ;   cout << "\x1b[40m \x1b[0m" << "\x1b[" << color_1 << "m" << "                                            " << "\x1b[0m" << "\x1b[40m \x1b[0m";
    printf( "\033[%d;%dH",  (r_y + 11 ), (r_x - 6)) ;   cout << "\x1b[40m \x1b[0m" << "\x1b[" << color << "m" << "                                            " << "\x1b[0m" << "\x1b[40m \x1b[0m";
    printf( "\033[%d;%dH",  (r_y + 12 ), (r_x - 6)) ;   cout << "\x1b[40m \x1b[0m" << "\x1b[" << color_1 << "m" << "                                              " << "\x1b[0m" << "\x1b[40m \x1b[0m";
    printf( "\033[%d;%dH",  (r_y + 13 ), (r_x - 6)) ;   cout << "\x1b[40m \x1b[0m" << "\x1b[" << color << "m" << "                                              " << "\x1b[0m" << "\x1b[40m \x1b[0m";
    printf( "\033[%d;%dH",  (r_y + 14 ), (r_x - 6)) ;   cout << "\x1b[40m \x1b[0m" << "\x1b[" << color_1 << "m" << "                                              " << "\x1b[0m" << "\x1b[40m \x1b[0m";
    printf( "\033[%d;%dH",  (r_y + 15 ), (r_x - 6)) ;   cout << "\x1b[40m \x1b[0m" << "\x1b[" << color << "m" << "                                              " << "\x1b[0m" << "\x1b[40m \x1b[0m";
    printf( "\033[%d;%dH",  (r_y + 16 ), (r_x - 4)) ;   cout << "\x1b[40m \x1b[0m" << "\x1b[" << color_1 << "m" << "                                              " << "\x1b[0m" << "\x1b[40m \x1b[0m";
    printf( "\033[%d;%dH",  (r_y + 17 ), (r_x - 4)) ;   cout << "\x1b[40m \x1b[0m" << "\x1b[" << color << "m" << "                                              " << "\x1b[0m" << "\x1b[40m \x1b[0m";
    printf( "\033[%d;%dH",  (r_y + 18 ), (r_x - 4)) ;   cout << "\x1b[40m \x1b[0m" << "\x1b[" << color_1 << "m" << "                                              " << "\x1b[0m" << "\x1b[40m \x1b[0m";
    printf( "\033[%d;%dH",  (r_y + 19 ), (r_x - 4)) ;   cout << "\x1b[40m \x1b[0m" << "\x1b[" << color << "m" << "                                              " << "\x1b[0m" << "\x1b[40m \x1b[0m";
}

void road_l3()
{
    int color, color_1;
    color = 100;
    color_1 = 47;
    r_x = 20;
    r_y = 20;

    printf( "\033[%d;%dH",  (r_y + 4 ), (r_x - 4));   cout << "\x1b[40m \x1b[0m" << "\x1b[" << color_1 << "m" << "                                    " << "\x1b[0m" << "\x1b[40m \x1b[0m";
    printf( "\033[%d;%dH",  (r_y + 5 ), (r_x - 4)) ;   cout << "\x1b[40m \x1b[0m" << "\x1b[" << color << "m" << "                                    " << "\x1b[0m" << "\x1b[40m \x1b[0m";
    printf( "\033[%d;%dH",  (r_y + 6 ), (r_x - 4)) ;   cout << "\x1b[40m \x1b[0m" << "\x1b[" << color_1 << "m" << "                                    " << "\x1b[0m" << "\x1b[40m \x1b[0m";
    printf( "\033[%d;%dH",  (r_y + 7 ), (r_x - 4)) ;   cout << "\x1b[40m \x1b[0m" << "\x1b[" << color << "m" << "                                    " << "\x1b[0m" << "\x1b[40m \x1b[0m";
    printf( "\033[%d;%dH",  (r_y + 8 ), (r_x - 8)) ;   cout << "\x1b[40m \x1b[0m" << "\x1b[" << color_1 << "m" << "                                              " << "\x1b[0m" << "\x1b[40m \x1b[0m";
    printf( "\033[%d;%dH",  (r_y + 9 ), (r_x - 8)) ;   cout << "\x1b[40m \x1b[0m" << "\x1b[" << color << "m" << "                                              " << "\x1b[0m" << "\x1b[40m \x1b[0m";
    printf( "\033[%d;%dH",  (r_y + 10 ), (r_x - 8)) ;   cout << "\x1b[40m \x1b[0m" << "\x1b[" << color_1 << "m" << "                                              " << "\x1b[0m" << "\x1b[40m \x1b[0m";
    printf( "\033[%d;%dH",  (r_y + 11 ), (r_x - 8)) ;   cout << "\x1b[40m \x1b[0m" << "\x1b[" << color << "m" << "                                              " << "\x1b[0m" << "\x1b[40m \x1b[0m";
    printf( "\033[%d;%dH",  (r_y + 12 ), (r_x - 6)) ;   cout << "\x1b[40m \x1b[0m" << "\x1b[" << color_1 << "m" << "                                              " << "\x1b[0m" << "\x1b[40m \x1b[0m";
    printf( "\033[%d;%dH",  (r_y + 13 ), (r_x - 6)) ;   cout << "\x1b[40m \x1b[0m" << "\x1b[" << color << "m" << "                                              " << "\x1b[0m" << "\x1b[40m \x1b[0m";
    printf( "\033[%d;%dH",  (r_y + 14 ), (r_x - 6)) ;   cout << "\x1b[40m \x1b[0m" << "\x1b[" << color_1 << "m" << "                                              " << "\x1b[0m" << "\x1b[40m \x1b[0m";
    printf( "\033[%d;%dH",  (r_y + 15 ), (r_x - 6)) ;   cout << "\x1b[40m \x1b[0m" << "\x1b[" << color << "m" << "                                              " << "\x1b[0m" << "\x1b[40m \x1b[0m";
    printf( "\033[%d;%dH",  (r_y + 16 ), (r_x - 4)) ;   cout << "\x1b[40m \x1b[0m" << "\x1b[" << color_1 << "m" << "                                              " << "\x1b[0m" << "\x1b[40m \x1b[0m";
    printf( "\033[%d;%dH",  (r_y + 17 ), (r_x - 4)) ;   cout << "\x1b[40m \x1b[0m" << "\x1b[" << color << "m" << "                                              " << "\x1b[0m" << "\x1b[40m \x1b[0m";
    printf( "\033[%d;%dH",  (r_y + 18 ), (r_x - 4)) ;   cout << "\x1b[40m \x1b[0m" << "\x1b[" << color_1 << "m" << "                                              " << "\x1b[0m" << "\x1b[40m \x1b[0m";
    printf( "\033[%d;%dH",  (r_y + 19 ), (r_x - 4)) ;   cout << "\x1b[40m \x1b[0m" << "\x1b[" << color << "m" << "                                              " << "\x1b[0m" << "\x1b[40m \x1b[0m";
}

void road_l4()
{
    int color, color_1;
    color = 100;
    color_1 = 47;
    r_x = 16;
    r_y = 20;

    printf( "\033[%d;%dH",  (r_y + 4 ), (r_x - 4));   cout << "\x1b[40m \x1b[0m" << "\x1b[" << color << "m" << "                                    " << "\x1b[0m" << "\x1b[40m \x1b[0m";
    printf( "\033[%d;%dH",  (r_y + 5 ), (r_x - 4)) ;   cout << "\x1b[40m \x1b[0m" << "\x1b[" << color_1 << "m" << "                                    " << "\x1b[0m" << "\x1b[40m \x1b[0m";
    printf( "\033[%d;%dH",  (r_y + 6 ), (r_x - 4)) ;   cout << "\x1b[40m \x1b[0m" << "\x1b[" << color << "m" << "                                    " << "\x1b[0m" << "\x1b[40m \x1b[0m";
    printf( "\033[%d;%dH",  (r_y + 7 ), (r_x - 4)) ;   cout << "\x1b[40m \x1b[0m" << "\x1b[" << color_1 << "m" << "                                    " << "\x1b[0m" << "\x1b[40m \x1b[0m";
    printf( "\033[%d;%dH",  (r_y + 8 ), (r_x - 8)) ;   cout << "\x1b[40m \x1b[0m" << "\x1b[" << color << "m" << "                                              " << "\x1b[0m" << "\x1b[40m \x1b[0m";
    printf( "\033[%d;%dH",  (r_y + 9 ), (r_x - 8)) ;   cout << "\x1b[40m \x1b[0m" << "\x1b[" << color_1 << "m" << "                                              " << "\x1b[0m" << "\x1b[40m \x1b[0m";
    printf( "\033[%d;%dH",  (r_y + 10 ), (r_x - 8)) ;   cout << "\x1b[40m \x1b[0m" << "\x1b[" << color << "m" << "                                              " << "\x1b[0m" << "\x1b[40m \x1b[0m";
    printf( "\033[%d;%dH",  (r_y + 11 ), (r_x - 8)) ;   cout << "\x1b[40m \x1b[0m" << "\x1b[" << color_1 << "m" << "                                              " << "\x1b[0m" << "\x1b[40m \x1b[0m";
    printf( "\033[%d;%dH",  (r_y + 12 ), (r_x - 8)) ;   cout << "\x1b[40m \x1b[0m" << "\x1b[" << color << "m" << "                                                " << "\x1b[0m" << "\x1b[40m \x1b[0m";
    printf( "\033[%d;%dH",  (r_y + 13 ), (r_x - 8)) ;   cout << "\x1b[40m \x1b[0m" << "\x1b[" << color_1 << "m" << "                                                " << "\x1b[0m" << "\x1b[40m \x1b[0m";
    printf( "\033[%d;%dH",  (r_y + 14 ), (r_x - 8)) ;   cout << "\x1b[40m \x1b[0m" << "\x1b[" << color << "m" << "                                                " << "\x1b[0m" << "\x1b[40m \x1b[0m";
    printf( "\033[%d;%dH",  (r_y + 15 ), (r_x - 8)) ;   cout << "\x1b[40m \x1b[0m" << "\x1b[" << color_1 << "m" << "                                                " << "\x1b[0m" << "\x1b[40m \x1b[0m";
    printf( "\033[%d;%dH",  (r_y + 16 ), (r_x - 4)) ;   cout << "\x1b[40m \x1b[0m" << "\x1b[" << color << "m" << "                                              " << "\x1b[0m" << "\x1b[40m \x1b[0m";
    printf( "\033[%d;%dH",  (r_y + 17 ), (r_x - 4)) ;   cout << "\x1b[40m \x1b[0m" << "\x1b[" << color_1 << "m" << "                                              " << "\x1b[0m" << "\x1b[40m \x1b[0m";
    printf( "\033[%d;%dH",  (r_y + 18 ), (r_x - 4)) ;   cout << "\x1b[40m \x1b[0m" << "\x1b[" << color << "m" << "                                              " << "\x1b[0m" << "\x1b[40m \x1b[0m";
    printf( "\033[%d;%dH",  (r_y + 19 ), (r_x - 4)) ;   cout << "\x1b[40m \x1b[0m" << "\x1b[" << color_1 << "m" << "                                              " << "\x1b[0m" << "\x1b[40m \x1b[0m";
}

void road_l5()
{
    int color, color_1;
    color = 100;
    color_1 = 47;
    r_x = 16;
    r_y = 20;

    printf( "\033[%d;%dH",  (r_y + 4 ), (r_x - 0));   cout << "\x1b[40m \x1b[0m" << "\x1b[" << color << "m" << "                                    " << "\x1b[0m" << "\x1b[40m \x1b[0m";
    printf( "\033[%d;%dH",  (r_y + 5 ), (r_x - 0)) ;   cout << "\x1b[40m \x1b[0m" << "\x1b[" << color_1 << "m" << "                                    " << "\x1b[0m" << "\x1b[40m \x1b[0m";
    printf( "\033[%d;%dH",  (r_y + 6 ), (r_x - 0)) ;   cout << "\x1b[40m \x1b[0m" << "\x1b[" << color << "m" << "                                    " << "\x1b[0m" << "\x1b[40m \x1b[0m";
    printf( "\033[%d;%dH",  (r_y + 7 ), (r_x - 0)) ;   cout << "\x1b[40m \x1b[0m" << "\x1b[" << color_1 << "m" << "                                    " << "\x1b[0m" << "\x1b[40m \x1b[0m";
    printf( "\033[%d;%dH",  (r_y + 8 ), (r_x - 6)) ;   cout << "\x1b[40m \x1b[0m" << "\x1b[" << color << "m" << "                                            " << "\x1b[0m" << "\x1b[40m \x1b[0m";
    printf( "\033[%d;%dH",  (r_y + 9 ), (r_x - 6)) ;   cout << "\x1b[40m \x1b[0m" << "\x1b[" << color_1 << "m" << "                                            " << "\x1b[0m" << "\x1b[40m \x1b[0m";
    printf( "\033[%d;%dH",  (r_y + 10 ), (r_x - 6)) ;   cout << "\x1b[40m \x1b[0m" << "\x1b[" << color << "m" << "                                            " << "\x1b[0m" << "\x1b[40m \x1b[0m";
    printf( "\033[%d;%dH",  (r_y + 11 ), (r_x - 6)) ;   cout << "\x1b[40m \x1b[0m" << "\x1b[" << color_1 << "m" << "                                            " << "\x1b[0m" << "\x1b[40m \x1b[0m";
    printf( "\033[%d;%dH",  (r_y + 12 ), (r_x - 8)) ;   cout << "\x1b[40m \x1b[0m" << "\x1b[" << color << "m" << "                                                " << "\x1b[0m" << "\x1b[40m \x1b[0m";
    printf( "\033[%d;%dH",  (r_y + 13 ), (r_x - 8)) ;   cout << "\x1b[40m \x1b[0m" << "\x1b[" << color_1 << "m" << "                                                " << "\x1b[0m" << "\x1b[40m \x1b[0m";
    printf( "\033[%d;%dH",  (r_y + 14 ), (r_x - 8)) ;   cout << "\x1b[40m \x1b[0m" << "\x1b[" << color << "m" << "                                                " << "\x1b[0m" << "\x1b[40m \x1b[0m";
    printf( "\033[%d;%dH",  (r_y + 15 ), (r_x - 8)) ;   cout << "\x1b[40m \x1b[0m" << "\x1b[" << color_1 << "m" << "                                                " << "\x1b[0m" << "\x1b[40m \x1b[0m";
    printf( "\033[%d;%dH",  (r_y + 16 ), (r_x - 4)) ;   cout << "\x1b[40m \x1b[0m" << "\x1b[" << color << "m" << "                                              " << "\x1b[0m" << "\x1b[40m \x1b[0m";
    printf( "\033[%d;%dH",  (r_y + 17 ), (r_x - 4)) ;   cout << "\x1b[40m \x1b[0m" << "\x1b[" << color_1 << "m" << "                                              " << "\x1b[0m" << "\x1b[40m \x1b[0m";
    printf( "\033[%d;%dH",  (r_y + 18 ), (r_x - 4)) ;   cout << "\x1b[40m \x1b[0m" << "\x1b[" << color << "m" << "                                              " << "\x1b[0m" << "\x1b[40m \x1b[0m";
    printf( "\033[%d;%dH",  (r_y + 19 ), (r_x - 4)) ;   cout << "\x1b[40m \x1b[0m" << "\x1b[" << color_1 << "m" << "                                              " << "\x1b[0m" << "\x1b[40m \x1b[0m";
}