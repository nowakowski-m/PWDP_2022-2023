#include <iostream>
#include <stdio.h>

using namespace std;

int x,y;

void car1()
{
    printf("\033[%d;%dH", (y-9), (x-2));   cout << "\x1b[41m      \x1b[0m";
    printf("\033[%d;%dH", (y-8), (x-3));   cout << "\x1b[41m \x1b[0m" << "\x1b[101m      \x1b[0m" << "\x1b[41m \x1b[0m";
    printf("\033[%d;%dH", (y-7), (x-4));   cout << "\x1b[41m \x1b[0m" << "\x1b[101m        \x1b[0m" << "\x1b[41m \x1b[0m";
    printf("\033[%d;%dH", (y-6), (x-5));   cout << "\x1b[41m \x1b[0m" << "\x1b[101m          \x1b[0m" << "\x1b[41m \x1b[0m";
    printf("\033[%d;%dH", (y-5), (x-6));   cout << "\x1b[40m \x1b[0m" <<  "\x1b[41m \x1b[0m" << "\x1b[101m          \x1b[0m" << "\x1b[41m \x1b[0m" << "\x1b[40m \x1b[0m";
    printf("\033[%d;%dH", (y-4), (x-6));   cout << "\x1b[40m \x1b[0m" << "\x1b[41m \x1b[0m" << "\x1b[101m          \x1b[0m" << "\x1b[41m \x1b[0m" << "\x1b[40m \x1b[0m";
    printf("\033[%d;%dH", (y-3), (x-4));   cout << "\x1b[41m          \x1b[0m";
    printf("\033[%d;%dH", 1000, 0);
}

void car()
{   
    printf("\033[%d;%dH", (y-8), (x-4));   cout << "\x1b[45m          \x1b[0m";
    printf("\033[%d;%dH", (y-7), (x-5));   cout << "\x1b[45m  \x1b[0m" << "\x1b[46m        \x1b[0m" << "\x1b[45m  \x1b[0m";
    printf("\033[%d;%dH", (y-6), (x-6));   cout << "\x1b[45m \x1b[0m" << "\x1b[45m            \x1b[0m" << "\x1b[45m \x1b[0m";
    printf("\033[%d;%dH", (y-5), (x-6));   cout << "\x1b[45m \x1b[0m" <<  "\x1b[41m   \x1b[0m" << "\x1b[45m      \x1b[0m" << "\x1b[41m   \x1b[0m" << "\x1b[45m \x1b[0m";
    printf("\033[%d;%dH", (y-4), (x-5));   cout << "\x1b[45m            \x1b[0m";
    printf("\033[%d;%dH", (y-3), (x-5));   cout << "\x1b[40m   \x1b[0m"; printf("\033[%d;%dH", (y-3), (x+4)); cout << "\x1b[40m   ";
    printf("\033[%d;%dH", 1000, 0);
}