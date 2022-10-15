//
// Created by Wenzc on 2022/10/10.
//
#include <stdio.h>

int main(){

    int leap = 0;
    int year = 0;
    scanf("%d",&year);

    if (year % 4 != 0){
        leap = 0;
    } else {
        if (year % 100 != 0){
            leap = 1;
        } else {
            if (year % 400 != 0){
                leap = 0;
            } else {
                leap = 1;
            }
        }

    }
    if (leap == 0){
        printf("The year %d isn't a leap year\n",year);
    } else {
        printf("The year %d is a leap year\n",year);
    }

        return 0;
}