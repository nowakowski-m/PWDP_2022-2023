#include <iostream>
#include <stdio.h>
#include "game.h"

using namespace std;

void start_menu(), game_difficulty_choose(), game_lenght_choose();


int menu_pos, menu_h;
char m_updown, m_updown1, m_updown2, m_updown3, m_updown4;

void ascii_logo()
{
    printf( "\033[%d;%dH", ( 11 ), ( 36 ) ); cout << "\x1b[1;31;40m" << "  ____                        " << "\x1b[0m";
    printf( "\033[%d;%dH", ( 12 ), ( 36 ) ); cout << "\x1b[1;31;40m" << R"( |  _ \    __ _    ___    ___ )" << "\x1b[0m";
    printf( "\033[%d;%dH", ( 13 ), ( 36 ) ); cout << "\x1b[1;31;40m" << R"( | |_) |  / _` |  / __|  / _ \)" << "\x1b[0m";
    printf( "\033[%d;%dH", ( 14 ), ( 36 ) ); cout << "\x1b[1;31;40m" << " |  _ <  | (_| | | (__  |  __/" << "\x1b[0m";
    printf( "\033[%d;%dH", ( 15 ), ( 36 ) ); cout << "\x1b[1;31;40m" << R"( |_| \_\  \__,_|  \___|  \___|)" << "\x1b[0m";
    printf( "\033[%d;%dH", ( 16 ), ( 36 ) ); cout << "\x1b[1;31;40m" << "                              " << "\x1b[0m";
}

void loading()
{
    int loading_y;
	loading_y = 1;

    printf( "\033[%d;%dH", ( 20 ), ( 43 ) ); 
	cout << "Loading... ";
	for (int loading_x=1; loading_x<=5; loading_x++)
	{	
        printf( "\033[%d;%dH", ( 20 ), ( 53+loading_x ) ); 
		cout << "\x1b[41mഠ\x1b[0m";
		cout.flush();
  		usleep(500000);
	}
}


void start_bg()
{
    menu_h = 1;
    system("clear");
    while (menu_h <= 10)
    {
        for (int white = 1;  white <= 50; white+=1)
        {
            cout << "\x1b[47m  \x1b[0m";
            cout << "\x1b[100m  \x1b[0m";
        }
        cout << endl;
        for (int black = 1; black <= 50; black ++)
        {
            cout << "\x1b[100m  \x1b[0m";
            cout << "\x1b[47m  \x1b[0m";
        }
        cout << endl;
        menu_h++;
    }
}

void rules()
{
    m_updown = 0;
    system("clear");
    start_bg();
    printf( "\033[%d;%dH", ( 8 ), ( 40 ) );   cout << "\x1b[1;31;40m                          \x1b[0m";
    printf( "\033[%d;%dH", ( 9 ), ( 40 ) );   cout << "\x1b[1;31;40m          Zasady          \x1b[0m";
    printf( "\033[%d;%dH", ( 10 ), ( 40 ) );   cout << "\x1b[1;31;40m                          \x1b[0m";

    printf( "\033[%d;%dH", ( 12 ), ( 40 ) );   cout << "\x1b[1;31;40m                          \x1b[0m";
    printf( "\033[%d;%dH", ( 13 ), ( 40 ) );   cout << "\x1b[1;31;40m     1. Wybierz czas      \x1b[0m";
    printf( "\033[%d;%dH", ( 14 ), ( 40 ) );   cout << "\x1b[1;31;40m        rozgrywki         \x1b[0m";
    printf( "\033[%d;%dH", ( 15 ), ( 40 ) );   cout << "\x1b[1;31;40m                          \x1b[0m";
    printf( "\033[%d;%dH", ( 16 ), ( 40 ) );   cout << "\x1b[1;31;40m     2.   Wybierz         \x1b[0m";
    printf( "\033[%d;%dH", ( 17 ), ( 40 ) );   cout << "\x1b[1;31;40m      poziom trudnosci    \x1b[0m";
    printf( "\033[%d;%dH", ( 18 ), ( 40 ) );   cout << "\x1b[1;31;40m                          \x1b[0m";
    printf( "\033[%d;%dH", ( 19 ), ( 40 ) );   cout << "\x1b[1;31;40m     3. Zdobywaj wynik    \x1b[0m";
    printf( "\033[%d;%dH", ( 20 ), ( 40 ) );   cout << "\x1b[1;31;40m     za bezbledna jazde   \x1b[0m";
    printf( "\033[%d;%dH", ( 21 ), ( 40 ) );   cout << "\x1b[1;31;40m                          \x1b[0m";
    printf( "\033[%d;%dH", ( 22 ), ( 40 ) );   cout << "\x1b[1;31;40m     4. Stracisz je za    \x1b[0m";
    printf( "\033[%d;%dH", ( 23 ), ( 40 ) );   cout << "\x1b[1;31;40m    uderzenie w barierki  \x1b[0m";
    printf( "\033[%d;%dH", ( 24 ), ( 40 ) );   cout << "\x1b[1;31;40m                          \x1b[0m";

    printf( "\033[%d;%dH", ( 26 ), ( 40 ) );   cout << "\x1b[1;31;40m                          \x1b[0m";
    printf( "\033[%d;%dH", ( 27 ), ( 40 ) );   cout << "\x1b[1;31;40m        Sterowanie        \x1b[0m";
    printf( "\033[%d;%dH", ( 28 ), ( 40 ) );   cout << "\x1b[1;31;40m                          \x1b[0m";

    printf( "\033[%d;%dH", ( 30 ), ( 40 ) );   cout << "\x1b[1;31;40m                          \x1b[0m";
    printf( "\033[%d;%dH", ( 31 ), ( 40 ) );   cout << "\x1b[1;31;40m        A   Lewo          \x1b[0m";
    printf( "\033[%d;%dH", ( 32 ), ( 40 ) );   cout << "\x1b[1;31;40m        D   Prawo         \x1b[0m";
    printf( "\033[%d;%dH", ( 33 ), ( 40 ) );   cout << "\x1b[1;31;40m        ~   Koniec        \x1b[0m";
    printf( "\033[%d;%dH", ( 34 ), ( 40 ) );   cout << "\x1b[1;31;40m                          \x1b[0m";
    printf( "\033[%d;%dH", ( 1000 ), ( 0 ) );
    system("stty raw");
    m_updown1 = getchar();
    system("stty cooked");

    if (m_updown1 == 13)
    {
        start_menu();
    }
    
    else if (m_updown1 == 126)
    {
        exit(0);
    }
    else
    {
        rules();
    }
}

void credits()
{
    m_updown = 0;
    system("clear");
    start_bg();
    printf( "\033[%d;%dH", ( 10 ), ( 40 ) );   cout << "\x1b[1;31;40m                          \x1b[0m";
    printf( "\033[%d;%dH", ( 11 ), ( 40 ) );   cout << "\x1b[1;31;40m          Tworca          \x1b[0m";
    printf( "\033[%d;%dH", ( 12 ), ( 40 ) );   cout << "\x1b[1;31;40m                          \x1b[0m";
    printf( "\033[%d;%dH", ( 14 ), ( 40 ) );   cout << "\x1b[1;31;40m                          \x1b[0m";
    printf( "\033[%d;%dH", ( 15 ), ( 40 ) );   cout << "\x1b[1;31;40m          Michal          \x1b[0m";
    printf( "\033[%d;%dH", ( 16 ), ( 40 ) );   cout << "\x1b[1;31;40m        Nowakowski        \x1b[0m";
    printf( "\033[%d;%dH", ( 17 ), ( 40 ) );   cout << "\x1b[1;31;40m                          \x1b[0m";
    printf( "\033[%d;%dH", ( 1000 ), ( 0 ) );
    system("stty raw");
    m_updown2 = getchar();
    system("stty cooked");

    if (m_updown2 == 13)
    {
        start_menu();
    }
    
    else if (m_updown2 == 126)
    {
        exit(0);
    }
    else
    {
        credits();
    }
}

void menu_launch()
{
    system("clear");
    start_bg();
    ascii_logo();
    printf( "\033[%d;%dH", ( 20 ), ( 47 ) );   cout << "\x1b[1;31;40m        \x1b[0m";
    printf( "\033[%d;%dH", ( 21 ), ( 47 ) );   cout << "\x1b[1;31;40m \x1b[0m" << "\x1b[1;30;101m Graj!\x1b[0m" << "\x1b[1;31;40m \x1b[0m";
    printf( "\033[%d;%dH", ( 22 ), ( 47 ) );   cout << "\x1b[1;31;40m        \x1b[0m";
    printf( "\033[%d;%dH", ( 23 ), ( 47 ) );   cout << "\x1b[1;31;40m Zasady \x1b[0m";
    printf( "\033[%d;%dH", ( 24 ), ( 47 ) );   cout << "\x1b[1;31;40m        \x1b[0m";
    printf( "\033[%d;%dH", ( 25 ), ( 47 ) );   cout << "\x1b[1;31;40m Tworca \x1b[0m";
    printf( "\033[%d;%dH", ( 26 ), ( 47 ) );   cout << "\x1b[1;31;40m        \x1b[0m";
    printf( "\033[%d;%dH", ( 29 ), ( 47 ) );   cout << "\x1b[1;31;40m        \x1b[0m";
    printf( "\033[%d;%dH", ( 30 ), ( 47 ) );   cout << "\x1b[1;31;40m Koniec \x1b[0m";
    printf( "\033[%d;%dH", ( 31 ), ( 47 ) );   cout << "\x1b[1;31;40m        \x1b[0m";
    printf( "\033[%d;%dH", ( 1000 ), ( 0 ) );
}

void game_lenght_choose()
{
    start_bg();
    ascii_logo();
    printf( "\033[%d;%dH", ( 20 ), ( 47 ) );   cout << "\x1b[1;31;40m        \x1b[0m";
    printf( "\033[%d;%dH", ( 21 ), ( 47 ) );   cout << "\x1b[1;31;40m \x1b[0m" << "\x1b[1;30;101m 1 min\x1b[0m" << "\x1b[1;31;40m \x1b[0m";
    printf( "\033[%d;%dH", ( 22 ), ( 47 ) );   cout << "\x1b[1;31;40m        \x1b[0m";
    printf( "\033[%d;%dH", ( 23 ), ( 47 ) );   cout << "\x1b[1;31;40m  2 min \x1b[0m";
    printf( "\033[%d;%dH", ( 24 ), ( 47 ) );   cout << "\x1b[1;31;40m        \x1b[0m";
    printf( "\033[%d;%dH", ( 25 ), ( 47 ) );   cout << "\x1b[1;31;40m  3 min \x1b[0m";
    printf( "\033[%d;%dH", ( 26 ), ( 47 ) );   cout << "\x1b[1;31;40m        \x1b[0m";
    printf( "\033[%d;%dH", ( 1000 ), ( 0 ) );

    while (m_updown3 != 13)
    {
        system("stty raw");
        m_updown3 = getchar();
        system("stty cooked");

        if(m_updown3 == 126)
        {
            exit(0);
        }

        if (m_updown3 == 's' or m_updown3 == 'S')
        {
            menu_pos++;
        }

        if (m_updown3 == 'w' or m_updown3 == 'W')
        {
            menu_pos--;
        }

        if (menu_pos >= 3)
        {
            menu_pos = 0;
        }

        if (menu_pos <= (-1))
        {
            menu_pos = 2;
        }

        if (menu_pos == 0)
        {
            start_bg();
            ascii_logo();
            printf( "\033[%d;%dH", ( 20 ), ( 47 ) );   cout << "\x1b[1;31;40m        \x1b[0m";
            printf( "\033[%d;%dH", ( 21 ), ( 47 ) );   cout << "\x1b[1;31;40m \x1b[0m" << "\x1b[1;30;101m 1 min\x1b[0m" << "\x1b[1;31;40m \x1b[0m";
            printf( "\033[%d;%dH", ( 22 ), ( 47 ) );   cout << "\x1b[1;31;40m        \x1b[0m";
            printf( "\033[%d;%dH", ( 23 ), ( 47 ) );   cout << "\x1b[1;31;40m  2 min \x1b[0m";
            printf( "\033[%d;%dH", ( 24 ), ( 47 ) );   cout << "\x1b[1;31;40m        \x1b[0m";
            printf( "\033[%d;%dH", ( 25 ), ( 47 ) );   cout << "\x1b[1;31;40m  3 min \x1b[0m";
            printf( "\033[%d;%dH", ( 26 ), ( 47 ) );   cout << "\x1b[1;31;40m        \x1b[0m";
            printf( "\033[%d;%dH", ( 1000 ), ( 0 ) );
            
            if (m_updown3 == 13)
            {
                game_lenght_for_if = 0;
                menu_pos = 0;
                game_difficulty_choose();
            }
        }

        if (menu_pos == 1)
        {
            start_bg();
            ascii_logo();
            printf( "\033[%d;%dH", ( 20 ), ( 47 ) );   cout << "\x1b[1;31;40m        \x1b[0m";
            printf( "\033[%d;%dH", ( 21 ), ( 47 ) );   cout << "\x1b[1;31;40m  1 min \x1b[0m";
            printf( "\033[%d;%dH", ( 22 ), ( 47 ) );   cout << "\x1b[1;31;40m        \x1b[0m";
            printf( "\033[%d;%dH", ( 23 ), ( 47 ) );   cout << "\x1b[1;31;40m \x1b[0m" << "\x1b[1;30;101m 2 min\x1b[0m" << "\x1b[1;31;40m \x1b[0m";
            printf( "\033[%d;%dH", ( 24 ), ( 47 ) );   cout << "\x1b[1;31;40m        \x1b[0m";
            printf( "\033[%d;%dH", ( 25 ), ( 47 ) );   cout << "\x1b[1;31;40m  3 min \x1b[0m";
            printf( "\033[%d;%dH", ( 26 ), ( 47 ) );   cout << "\x1b[1;31;40m        \x1b[0m";
            printf( "\033[%d;%dH", ( 1000 ), ( 0 ) );
            
            if (m_updown3 == 13)
            {
                game_lenght_for_if = 1;
                menu_pos = 0;
                game_difficulty_choose();
            }
        }

        if (menu_pos == 2)
        {
            start_bg();
            ascii_logo();
            printf( "\033[%d;%dH", ( 20 ), ( 47 ) );   cout << "\x1b[1;31;40m        \x1b[0m";
            printf( "\033[%d;%dH", ( 21 ), ( 47 ) );   cout << "\x1b[1;31;40m  1 min \x1b[0m";
            printf( "\033[%d;%dH", ( 22 ), ( 47 ) );   cout << "\x1b[1;31;40m        \x1b[0m";
            printf( "\033[%d;%dH", ( 23 ), ( 47 ) );   cout << "\x1b[1;31;40m  2 min \x1b[0m";
            printf( "\033[%d;%dH", ( 24 ), ( 47 ) );   cout << "\x1b[1;31;40m        \x1b[0m";
            printf( "\033[%d;%dH", ( 25 ), ( 47 ) );   cout << "\x1b[1;31;40m \x1b[0m" << "\x1b[1;30;101m 3 min\x1b[0m" << "\x1b[1;31;40m \x1b[0m";
            printf( "\033[%d;%dH", ( 26 ), ( 47 ) );   cout << "\x1b[1;31;40m        \x1b[0m";
            printf( "\033[%d;%dH", ( 1000 ), ( 0 ) );
            
            if (m_updown3 == 13)
            {
                game_lenght_for_if = 2;
                menu_pos = 0;
                game_difficulty_choose();
            }
        }
    }
}

void game_start()
{
    system("clear");
    printf( "\033[%d;%dH", ( 21 ), ( 47 ) ); cout << "                 ";
    printf( "\033[%d;%dH", ( 22 ), ( 47 ) ); cout << "                 ";
    printf( "\033[%d;%dH", ( 23 ), ( 47 ) ); cout << "                 ";
    printf( "\033[%d;%dH", ( 24 ), ( 47 ) ); cout << "                 ";
    printf( "\033[%d;%dH", ( 25 ), ( 47 ) ); cout << "                 ";
    printf( "\033[%d;%dH", ( 26 ), ( 47 ) ); cout << "                 ";
    printf( "\033[%d;%dH", ( 27 ), ( 47 ) ); cout << "                 ";
    printf( "\033[%d;%dH", ( 28 ), ( 47 ) ); cout << "                 ";
    printf( "\033[%d;%dH", ( 29 ), ( 47 ) ); cout << "                 ";

    printf( "\033[%d;%dH", ( 30 ), ( 31 ) ); 
    cout << "Podpowiedz: Poruszaj sie samochodzikiem";
    printf( "\033[%d;%dH", ( 31 ), ( 35 ) );
    cout << "korzystajac z przyciskow A i D.";
    loading();
    menu_pos = 0;
    game();
    printf("\033[%d;%dH", 3, 4); cout << "\x1b[30;44m                             \x1b[0m";
    score_show();
}

void game_difficulty_choose()
{
    start_bg();
    ascii_logo();
    printf( "\033[%d;%dH", ( 20 ), ( 47 ) );   cout << "\x1b[1;31;40m        \x1b[0m";
    printf( "\033[%d;%dH", ( 21 ), ( 47 ) );   cout << "\x1b[1;31;40m \x1b[0m" << "\x1b[1;30;101m Latwy\x1b[0m" << "\x1b[1;31;40m \x1b[0m";
    printf( "\033[%d;%dH", ( 22 ), ( 47 ) );   cout << "\x1b[1;31;40m        \x1b[0m";
    printf( "\033[%d;%dH", ( 23 ), ( 47 ) );   cout << "\x1b[1;31;40m Sredni \x1b[0m";
    printf( "\033[%d;%dH", ( 24 ), ( 47 ) );   cout << "\x1b[1;31;40m        \x1b[0m";
    printf( "\033[%d;%dH", ( 25 ), ( 47 ) );   cout << "\x1b[1;31;40m Trudny \x1b[0m";
    printf( "\033[%d;%dH", ( 26 ), ( 47 ) );   cout << "\x1b[1;31;40m        \x1b[0m";
    printf( "\033[%d;%dH", ( 1000 ), ( 0 ) );
 
    while ( m_updown4 != 13 )
    {   
    system("stty raw");
    m_updown4 = getchar();
    system("stty cooked");

    if(m_updown4 == 126)
    {
        exit(0);
    }

    if (m_updown4 == 's' or m_updown4 == 'S')
    {
        menu_pos++;
    }

    if (m_updown4 == 'w' or m_updown4 == 'W')
    {
        menu_pos--;
    }

    if (menu_pos >= 3)
    {
        menu_pos = 0;
    }

    if (menu_pos <= (-1))
    {
        menu_pos = 2;
    }

    if (menu_pos == 0)
    {
        start_bg();
        ascii_logo();
        printf( "\033[%d;%dH", ( 20 ), ( 47 ) );   cout << "\x1b[1;31;40m        \x1b[0m";
        printf( "\033[%d;%dH", ( 21 ), ( 47 ) );   cout << "\x1b[1;31;40m \x1b[0m" << "\x1b[1;30;101m Latwy\x1b[0m" << "\x1b[1;31;40m \x1b[0m";
        printf( "\033[%d;%dH", ( 22 ), ( 47 ) );   cout << "\x1b[1;31;40m        \x1b[0m";
        printf( "\033[%d;%dH", ( 23 ), ( 47 ) );   cout << "\x1b[1;31;40m Sredni \x1b[0m";
        printf( "\033[%d;%dH", ( 24 ), ( 47 ) );   cout << "\x1b[1;31;40m        \x1b[0m";
        printf( "\033[%d;%dH", ( 25 ), ( 47 ) );   cout << "\x1b[1;31;40m Trudny \x1b[0m";
        printf( "\033[%d;%dH", ( 26 ), ( 47 ) );   cout << "\x1b[1;31;40m        \x1b[0m";
        printf( "\033[%d;%dH", ( 1000 ), ( 0 ) );

        if (m_updown4 == 13)
        {
            difficulty_level_for_if = 0;
            game_start();
        }
    }

    if (menu_pos == 1)
    {
        start_bg();
        ascii_logo();
        printf( "\033[%d;%dH", ( 20 ), ( 47 ) );   cout << "\x1b[1;31;40m        \x1b[0m";
        printf( "\033[%d;%dH", ( 21 ), ( 47 ) );   cout << "\x1b[1;31;40m  Latwy \x1b[0m";
        printf( "\033[%d;%dH", ( 22 ), ( 47 ) );   cout << "\x1b[1;31;40m        \x1b[0m";
        printf( "\033[%d;%dH", ( 23 ), ( 47 ) );   cout << "\x1b[1;31;40m \x1b[0m" << "\x1b[1;30;101mSredni\x1b[0m" << "\x1b[1;31;40m \x1b[0m";
        printf( "\033[%d;%dH", ( 24 ), ( 47 ) );   cout << "\x1b[1;31;40m        \x1b[0m";
        printf( "\033[%d;%dH", ( 25 ), ( 47 ) );   cout << "\x1b[1;31;40m Trudny \x1b[0m";
        printf( "\033[%d;%dH", ( 26 ), ( 47 ) );   cout << "\x1b[1;31;40m        \x1b[0m";
        printf( "\033[%d;%dH", ( 1000 ), ( 0 ) );

        if (m_updown4 == 13)
        {
            difficulty_level_for_if = 1;
            game_start();
        }
    }

    if (menu_pos == 2)
    {
        start_bg();
        ascii_logo();
        printf( "\033[%d;%dH", ( 20 ), ( 47 ) );   cout << "\x1b[1;31;40m        \x1b[0m";
        printf( "\033[%d;%dH", ( 21 ), ( 47 ) );   cout << "\x1b[1;31;40m  Latwy \x1b[0m";
        printf( "\033[%d;%dH", ( 22 ), ( 47 ) );   cout << "\x1b[1;31;40m        \x1b[0m";
        printf( "\033[%d;%dH", ( 23 ), ( 47 ) );   cout << "\x1b[1;31;40m Sredni \x1b[0m";
        printf( "\033[%d;%dH", ( 24 ), ( 47 ) );   cout << "\x1b[1;31;40m        \x1b[0m";
        printf( "\033[%d;%dH", ( 25 ), ( 47 ) );   cout << "\x1b[1;31;40m \x1b[0m" << "\x1b[1;30;101mTrudny\x1b[0m" << "\x1b[1;31;40m \x1b[0m";
        printf( "\033[%d;%dH", ( 26 ), ( 47 ) );   cout << "\x1b[1;31;40m        \x1b[0m";
        printf( "\033[%d;%dH", ( 1000 ), ( 0 ) );

        if (m_updown4 == 13)
        {
            difficulty_level_for_if = 2;
            game_start();
        }
    }
 }
}

void menu_list()
{
        system("stty raw");
        m_updown = getchar();
        system("stty cooked");

        if(m_updown == 126)
        {
            exit(0);
        }

        if (m_updown == 's' or m_updown == 'S')
        {
            menu_pos++;
        }

        if (m_updown == 'w' or m_updown == 'W')
        {
            menu_pos--;
        }

        if (menu_pos >= 4)
        {
            menu_pos = 0;
        }

        if (menu_pos <= (-1))
        {
            menu_pos = 3;
        }

        if (menu_pos == 0)
        {
        start_bg();
        ascii_logo();
        printf( "\033[%d;%dH", ( 20 ), ( 47 ) );   cout << "\x1b[1;31;40m        \x1b[0m";
        printf( "\033[%d;%dH", ( 21 ), ( 47 ) );   cout << "\x1b[1;31;40m \x1b[0m" << "\x1b[1;30;101m Graj!\x1b[0m" << "\x1b[1;31;40m \x1b[0m";
        printf( "\033[%d;%dH", ( 22 ), ( 47 ) );   cout << "\x1b[1;31;40m        \x1b[0m";
        printf( "\033[%d;%dH", ( 23 ), ( 47 ) );   cout << "\x1b[1;31;40m Zasady \x1b[0m";
        printf( "\033[%d;%dH", ( 24 ), ( 47 ) );   cout << "\x1b[1;31;40m        \x1b[0m";
        printf( "\033[%d;%dH", ( 25 ), ( 47 ) );   cout << "\x1b[1;31;40m Tworca \x1b[0m";
        printf( "\033[%d;%dH", ( 26 ), ( 47 ) );   cout << "\x1b[1;31;40m        \x1b[0m";
        printf( "\033[%d;%dH", ( 29 ), ( 47 ) );   cout << "\x1b[1;31;40m        \x1b[0m";
        printf( "\033[%d;%dH", ( 30 ), ( 47 ) );   cout << "\x1b[1;31;40m Koniec \x1b[0m";
        printf( "\033[%d;%dH", ( 31 ), ( 47 ) );   cout << "\x1b[1;31;40m        \x1b[0m";
        }

        if (menu_pos == 1)
        {
        start_bg();
        ascii_logo();
        printf( "\033[%d;%dH", ( 20 ), ( 47 ) );   cout << "\x1b[1;31;40m        \x1b[0m";
        printf( "\033[%d;%dH", ( 21 ), ( 47 ) );   cout << "\x1b[1;31;40m  Graj! \x1b[0m";
        printf( "\033[%d;%dH", ( 22 ), ( 47 ) );   cout << "\x1b[1;31;40m        \x1b[0m";
        printf( "\033[%d;%dH", ( 23 ), ( 47 ) );   cout << "\x1b[1;31;40m \x1b[0m" << "\x1b[1;30;101mZasady\x1b[0m" << "\x1b[1;31;40m \x1b[0m";
        printf( "\033[%d;%dH", ( 24 ), ( 47 ) );   cout << "\x1b[1;31;40m        \x1b[0m";
        printf( "\033[%d;%dH", ( 25 ), ( 47 ) );   cout << "\x1b[1;31;40m Tworca \x1b[0m";
        printf( "\033[%d;%dH", ( 26 ), ( 47 ) );   cout << "\x1b[1;31;40m        \x1b[0m";
        printf( "\033[%d;%dH", ( 29 ), ( 47 ) );   cout << "\x1b[1;31;40m        \x1b[0m";
        printf( "\033[%d;%dH", ( 30 ), ( 47 ) );   cout << "\x1b[1;31;40m Koniec \x1b[0m";
        printf( "\033[%d;%dH", ( 31 ), ( 47 ) );   cout << "\x1b[1;31;40m        \x1b[0m";
        }

        if (menu_pos == 2)
        {
        start_bg();
        ascii_logo();
        printf( "\033[%d;%dH", ( 20 ), ( 47 ) );   cout << "\x1b[1;31;40m        \x1b[0m";
        printf( "\033[%d;%dH", ( 21 ), ( 47 ) );   cout << "\x1b[1;31;40m  Graj! \x1b[0m";
        printf( "\033[%d;%dH", ( 22 ), ( 47 ) );   cout << "\x1b[1;31;40m        \x1b[0m";
        printf( "\033[%d;%dH", ( 23 ), ( 47 ) );   cout << "\x1b[1;31;40m Zasady \x1b[0m";
        printf( "\033[%d;%dH", ( 24 ), ( 47 ) );   cout << "\x1b[1;31;40m        \x1b[0m";
        printf( "\033[%d;%dH", ( 25 ), ( 47 ) );   cout << "\x1b[1;31;40m \x1b[0m" << "\x1b[1;30;101mTworca\x1b[0m" << "\x1b[1;31;40m \x1b[0m";
        printf( "\033[%d;%dH", ( 26 ), ( 47 ) );   cout << "\x1b[1;31;40m        \x1b[0m";
        printf( "\033[%d;%dH", ( 29 ), ( 47 ) );   cout << "\x1b[1;31;40m        \x1b[0m";
        printf( "\033[%d;%dH", ( 30 ), ( 47 ) );   cout << "\x1b[1;31;40m Koniec \x1b[0m";
        printf( "\033[%d;%dH", ( 31 ), ( 47 ) );   cout << "\x1b[1;31;40m        \x1b[0m";
        }
        if (menu_pos == 3)
        {
        start_bg();
        ascii_logo();
        printf( "\033[%d;%dH", ( 20 ), ( 47 ) );   cout << "\x1b[1;31;40m        \x1b[0m";
        printf( "\033[%d;%dH", ( 21 ), ( 47 ) );   cout << "\x1b[1;31;40m  Graj! \x1b[0m";
        printf( "\033[%d;%dH", ( 22 ), ( 47 ) );   cout << "\x1b[1;31;40m        \x1b[0m";
        printf( "\033[%d;%dH", ( 23 ), ( 47 ) );   cout << "\x1b[1;31;40m Zasady \x1b[0m";
        printf( "\033[%d;%dH", ( 24 ), ( 47 ) );   cout << "\x1b[1;31;40m        \x1b[0m";
        printf( "\033[%d;%dH", ( 25 ), ( 47 ) );   cout << "\x1b[1;31;40m Tworca \x1b[0m";
        printf( "\033[%d;%dH", ( 26 ), ( 47 ) );   cout << "\x1b[1;31;40m        \x1b[0m";
        printf( "\033[%d;%dH", ( 29 ), ( 47 ) );   cout << "\x1b[1;31;40m        \x1b[0m";
        printf( "\033[%d;%dH", ( 30 ), ( 47 ) );   cout << "\x1b[1;31;40m \x1b[0m" << "\x1b[1;30;101mKoniec\x1b[0m" << "\x1b[1;31;40m \x1b[0m";
        printf( "\033[%d;%dH", ( 31 ), ( 47 ) );   cout << "\x1b[1;31;40m        \x1b[0m";
        }
}

void loading_menu()
{
    system("clear");
    printf( "\033[%d;%dH", ( 30 ), ( 31 ) ); 
    cout << "Podpowiedz: Jesli jeszcze tego nie zrobiles, ";
    printf( "\033[%d;%dH", ( 31 ), ( 36 ) ); 
    cout << "ustaw rozmiar terminala na 100x40.";
    loading();
    start_menu();
}

void start_menu()
{
    printf( "\033[%d;%dH", ( 1000 ), ( 0 ) );
    menu_launch();
    while(m_updown != 13)
    {
        menu_list();
        printf( "\033[%d;%dH", ( 1000 ), ( 0 ) );
    }
    
    if (m_updown == 13)
    {
        if (menu_pos == 0)
        {
            menu_pos = 0;
            game_lenght_choose();
        }
        if (menu_pos == 1)
        {
            rules();
        }
        if (menu_pos == 2)
        {
            credits();
        }
        if (menu_pos == 3)
        {
            exit(0);
        }
    }
}