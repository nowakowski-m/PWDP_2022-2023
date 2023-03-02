#include <iostream>

using namespace std;

int score, l_border, r_border;

void score_counting()
{
    if ( ( x-6 ) <= l_border or ( x+8 ) >= r_border)
    {
        if (score >= 5)
            score -= 5;
    }
    else
        score++;
}

void score_print()
{
    printf("\033[%d;%dH", 3, 4); cout << "\x1b[30;44mTwoj wynik: \x1b[0m" << "\x1b[30;44m" << score << "\x1b[0m";
    printf("\033[%d;%dH", 1000, 0);
}

