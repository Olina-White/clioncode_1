//
// Created by Wenzc on 2022/10/10.
//
#include <stdio.h>

int main(){
    int a,b,c;
    int min;
    scanf("%d%d%d",&a,&b,&c);

    if (a > b){
        if (b > c) {
            min = c;
        } else {
            min = b;
        }
    } else {  //a <= b
        if (a < c) {
            min = a;
        } else {  // a <= b and a >= c
            min = c;
        }
    }
    printf("min{%d,%d,%d} = %d\n",a,b,c,min);
//先把if...else...这个框架搞好
//可以加注释以便理解
    return 0;
}