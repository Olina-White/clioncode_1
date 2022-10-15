//
// Created by Wenzc on 2022/10/7.
//
#include <stdio.h>
//if...else...嵌套语句
int main(){
    int year = 0;
    scanf("%d",&year);//用1表示真，0表示假
    int leap = 0;
    if (year % 4 == 0){//%表示取余
        if (year % 100 == 0){
            if (year % 400 == 0){
                leap = 0;
            } else {
                leap = 1;
            }
        } else {// year % 100 != 0
            leap = 0;

        }
    } else {
        leap = 0;
    }//这里有种头重脚轻的感觉，可以倒过来用else...if
    printf("%d\n",leap);
    return 0;
}