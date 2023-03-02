#include <iostream>
#include "rules.h"

int road_frame;
time_t random_road;

void road_frame_for_kbhit();
void road_frame_for_time_gone();

void road_l_for_kbhit()
{
    if ( road_frame == 0 )
    road_c1();
    l_border = 28;
    r_border = 74;
    if ( road_frame == 1 )
    road_l();
    l_border = 26;
    r_border = 74;
    if ( road_frame == 2 )
    road_l1();
    l_border = 22;
    r_border = 70;
    if ( road_frame == 3 )
    road_l2();
    l_border = 18;
    r_border = 66;
    if ( road_frame == 4 )
    road_l3();
    l_border = 14;
    r_border = 62;
    if ( road_frame == 5 )
    road_l4();
    l_border = 10;
    r_border = 58;
    if ( road_frame == 6 )
    road_l5();
    l_border = 10;
    r_border = 58;
    if ( road_frame == 7)
    road_l5();
    l_border = 10;
    r_border = 58;
    if ( road_frame == 8)
    road_l5();
    l_border = 10;
    r_border = 58;
    if ( road_frame == 9)
    road_l4();
    l_border = 10;
    r_border = 58;
    if ( road_frame == 10)
    road_l3();
    l_border = 14;
    r_border = 62;
    if ( road_frame == 11)
    road_l2();
    l_border = 18;
    r_border = 66;
    if ( road_frame == 12)
    road_l1();
    l_border = 22;
    r_border = 70;
    if ( road_frame == 13)
    road_l();
    l_border = 26;
    r_border = 74;
}

void road_r_for_kbhit()
{
    if ( road_frame == 0 )
    road_c1();
    l_border = 28;
    r_border = 74;
    if ( road_frame == 1 )
    road_r();
    l_border = 28;
    r_border = 76;
    if ( road_frame == 2 )
    road_r1();
    l_border = 34;
    r_border = 82;
    if ( road_frame == 3 )
    road_r2();
    l_border = 38;
    r_border = 86;
    if ( road_frame == 4 )
    road_r3();
    l_border = 42;
    r_border = 90;
    if ( road_frame == 5 )
    road_r4();
    l_border = 46;
    r_border = 94;
    if ( road_frame == 6 )
    road_r5();
    l_border = 50;
    r_border = 98;
    if ( road_frame == 7)
    road_r5();
    l_border = 50;
    r_border = 98;
    if ( road_frame == 8)
    road_r5();
    l_border = 50;
    r_border = 98;
    if ( road_frame == 9)
    road_r4();
    l_border = 46;
    r_border = 94;
    if ( road_frame == 10)
    road_r3();
    l_border = 42;
    r_border = 90;
    if ( road_frame == 11)
    road_r2();
    l_border = 38;
    r_border = 86;
    if ( road_frame == 12)
    road_r1();
    l_border = 34;
    r_border = 82;
    if ( road_frame == 13)
    road_r();
    l_border = 28;
    r_border = 76;
}

void road_c_for_kbhit()
{
    if ( road_frame == 0 )
    road_c1();
    l_border = 28;
    r_border =  74;
    if ( road_frame == 1 )
    road_c();
    l_border = 28;
    r_border =  74;
    if ( road_frame == 2 )
    road_c1();
    l_border = 28;
    r_border =  74;
    if ( road_frame == 3 )
    road_c();
    l_border = 28;
    r_border =  74;
    if ( road_frame == 4 )
    road_c1();
    l_border = 28;
    r_border =  73;
    if ( road_frame == 5 )
    road_c();
    l_border = 28;
    r_border =  74;
    if ( road_frame == 6 )
    road_c1();
    l_border = 28;
    r_border =  74;
    if ( road_frame == 7)
    road_c();
    l_border = 28;
    r_border =  74;
    if ( road_frame == 8)
    road_c1();
    l_border = 28;
    r_border =  74;
    if ( road_frame == 9)
    road_c();
    l_border = 28;
    r_border =  74;
    if ( road_frame == 10)
    road_c1();
    l_border = 28;
    r_border =  74;
    if ( road_frame == 11)
    road_c();
    l_border = 28;
    r_border =  74;
    if ( road_frame == 12)
    road_c1();
    l_border = 28;
    r_border =  74;
    if ( road_frame == 13)
    road_c();
    l_border = 28;
    r_border =  74;
}

void road_l_for_time_gone()
{
    if ( road_frame == 0)
    {
        l_border = 26;
        r_border = 74;
        game_bg();
        score_print();
        road_l();
        car();
    }
    if ( road_frame == 1)
    {
        l_border = 22;
        r_border = 70;
        game_bg();
        score_print();
        road_l1();
        car();
    }
    if ( road_frame == 2)
    {
        l_border = 18;
        r_border = 66;
        game_bg();
        score_print();
        road_l2();
        car();
    }
    if ( road_frame == 3)
    {
        l_border = 14;
        r_border = 62;
        game_bg();
        score_print();
        road_l3();
        car();
    }
    if ( road_frame == 4)
    {
        l_border = 10;
        r_border = 58;
        game_bg();
        score_print();
        road_l4();
        car();
    }
    if ( road_frame == 5)
    {
        l_border = 10;
        r_border = 58;
        game_bg();
        score_print();
        road_l5();
        car();
    }
    if ( road_frame == 6)
    {
        l_border = 10;
        r_border = 58;
        game_bg();
        score_print();
        road_l5();
        car();
    }
    if ( road_frame == 7)
    {
        l_border = 10;
        r_border = 58;
        game_bg();
        score_print();
        road_l5();
        car();
    }
    if ( road_frame == 8)
    {
        l_border = 10;
        r_border = 58;
        game_bg();
        score_print();
        road_l4();
        car();
    }
    if ( road_frame == 9)
    {
        l_border = 14;
        r_border = 62;
        game_bg();
        score_print();
        road_l3();
        car();
    }   
    if ( road_frame == 10)
    {
        l_border = 18;
        r_border = 66;
        game_bg();
        score_print();
        road_l2();
        car();
    }
    if ( road_frame == 11)
    {
        l_border = 22;
        r_border = 70;
        game_bg();
        score_print();
        road_l1();
        car();
    }
    if ( road_frame == 12)
    {
        l_border = 26;
        r_border = 74;
        game_bg();
        score_print();
        road_l();
        car();
    }
    if ( road_frame == 13)
    {
        l_border = 28;
        r_border = 74;
        game_bg();
        score_print();
        road_c1();
        car();
    }
}

void road_r_for_time_gone()
{
    if ( road_frame == 0)
    {
        l_border = 28;
        r_border = 76;
        game_bg();
        score_print();
        road_r();
        car();
    }
    if ( road_frame == 1)
    {
        l_border = 34;
        r_border = 82;
        game_bg();
        score_print();
        road_r1();
        car();
    }
    if ( road_frame == 2)
    {
        l_border = 38;
        r_border = 86;
        game_bg();
        score_print();
        road_r2();
        car();
    }
    if ( road_frame == 3)
    {
        l_border = 42;
        r_border = 90;
        game_bg();
        score_print();
        road_r3();
        car();
    }
    if ( road_frame == 4)
    {
        l_border = 46;
        r_border = 94;
        game_bg();
        score_print();
        road_r4();
        car();
    }
    if ( road_frame == 5)
    {
        l_border = 50;
        r_border = 98;
        game_bg();
        score_print();
        road_r5();
        car();
    }
    if ( road_frame == 6)
    {
        l_border = 50;
        r_border = 98;
        game_bg();
        score_print();
        road_r5();
        car();
    }
    if ( road_frame == 7)
    {
        l_border = 50;
        r_border = 98;
        game_bg();
        score_print();
        road_r5();
        car();
    }
    if ( road_frame == 8)
    {
        l_border = 46;
        r_border = 94;
        game_bg();
        score_print();
        road_r4();
        car();
    }
    if ( road_frame == 9)
    {
        l_border = 42;
        r_border = 90;
        game_bg();
        score_print();
        road_r3();
        car();
    }   
    if ( road_frame == 10)
    {
        l_border = 38;
        r_border = 86;
        game_bg();
        score_print();
        road_r2();
        car();
    }
    if ( road_frame == 11)
    {
        l_border = 34;
        r_border = 82;
        game_bg();
        score_print();
        road_r1();
        car();
    }
    if ( road_frame == 12)
    {
        l_border = 28;
        r_border = 76;
        game_bg();
        score_print();
        road_r();
        car();
    }
    if ( road_frame == 13)
    {
        l_border = 28;
        r_border = 74;
        game_bg();
        score_print();
        road_c1();
        car();
    }
}

void road_c_for_time_gone()
{
    if ( road_frame == 0)
    {
        l_border = 28;
        r_border =  74;
        game_bg();
        score_print();
        road_c();
        car();
    }
    if ( road_frame == 1)
    {
        l_border = 28;
        r_border =  74;
        game_bg();
        score_print();
        road_c1();
        car();
    }
    if ( road_frame == 2)
    {
        l_border = 28;
        r_border =  74;
        game_bg();
        score_print();
        road_c();
        car();
    }
    if ( road_frame == 3)
    {
        l_border = 28;
        r_border =  74;
        game_bg();
        score_print();
        road_c1();
        car();
    }
    if ( road_frame == 4)
    {
        l_border = 28;
        r_border =  74;
        game_bg();
        score_print();
        road_c();
        car();
    }
    if ( road_frame == 5)
    {
        l_border = 28;
        r_border =  74;
        game_bg();
        score_print();
        road_c1();
        car();
    }
    if ( road_frame == 6)
    {
        l_border = 28;
        r_border =  74;
        game_bg();
        score_print();
        road_c();
        car();
    }
    if ( road_frame == 7)
    {
        l_border = 28;
        r_border =  74;
        game_bg();
        score_print();
        road_c1();
        car();
    }
    if ( road_frame == 8)
    {
        l_border = 28;
        r_border =  74;
        game_bg();
        score_print();
        road_c();
        car();
    }
    if ( road_frame == 9)
    {
        l_border = 28;
        r_border =  74;
        game_bg();
        score_print();
        road_c1();
        car();
    }   
    if ( road_frame == 10)
    {
        l_border = 28;
        r_border =  74;
        game_bg();
        score_print();
        road_c();
        car();
    }
    if ( road_frame == 11)
    {
        l_border = 28;
        r_border =  74;
        game_bg();
        score_print();
        road_c1();
        car();
    }
    if ( road_frame == 12)
    {
        l_border = 28;
        r_border =  74;
        game_bg();
        score_print();
        road_c();
        car();
    }
    if ( road_frame == 13)
    {
        l_border = 28;
        r_border =  74;
        game_bg();
        score_print();
        road_c1();
        car();
    }
}

void road_frame_for_kbhit()
{
    if (random_road == 1)
        road_l_for_kbhit();
    if (random_road == 0 or random_road == 2)
        road_c_for_kbhit();
    if (random_road == 3)
        road_r_for_kbhit();
}

void road_frame_for_time_gone()
{
    if (random_road == 1)
        road_l_for_time_gone();
    if (random_road == 0 or random_road == 2)
        road_c_for_time_gone();
    if (random_road == 3)
        road_r_for_time_gone();
}