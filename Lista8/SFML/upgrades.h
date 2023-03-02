#include "functions.h"

// function to buy an upgrade if user have enough points

void morePoints() {

        if (points >= morePointsPrice)  {

            errorBan = false;

            points -= morePointsPrice;
            morePointsPrice *= 3;
            randPointMax *= 2;

        }
        
        else
            notEnoughPointsError();
}