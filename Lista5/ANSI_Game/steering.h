#include <iostream>
#include <stdio.h>
#include "car.h"

using namespace std;

char z;

void input_take()
{
   system("stty raw");
    z = getchar();
   system("stty cooked");
    if (z == 126)
    {
        exit(0);
    }
    if (x >= 12)
    {
        if (z == 'a' or z == 'A')
        {
            x -= 4;
        }
    }
    if (x <= 88)
    {
        if (z == 'd' or z == 'D')
        {
            x += 4;
        }
    }
}