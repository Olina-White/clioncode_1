//
// Created by Wenzc on 2022/10/11.
//
#include <stdio.h>
#define NUM 5
int main(){
//让用户输入数组
    int numbers[NUM] = {0};
//这里只用写一个0，赋值给第一个数字，其余的都自动赋值为0
    for (int i = 0; i < NUM; i++){
        scanf("%d",&numbers[i]);//一个变量有左值（i = 1,空间）与右值(，里面的值)之分
    }
    int min = numbers[0];
    for ( int i = 0; i < NUM; i++){
       if (numbers[i] < min){
           min = numbers[i];
       }
    }
    printf("%d\n",min);
    return 0;
}
// int n;
// int NUM[n];这是变长数组，不推荐使用
// int numbers[NUM] = {[2] = 1};   仅在下标为2处赋值为1