//
// Created by Wenzc on 2022/10/7.
//
// 数组arry
#include <stdio.h>
#define NUM 5
int main(){
//    const int NUM = 5 （这样子用numbers后面不能加数组
// 或在main函数外面加个预处理指令 #dafine NUM 5
    int numbers[NUM] = {23,56,19,11,78};
//集合这样表示  数组  写成这样比较麻烦
//这里numbers的方括号里面不能用变量。即使在前面给变量赋值为常量也会报错
//要用变量，那么在前面给变量赋值为常量后numbers后面不能再写那串数组，即不能把它初始化
//也可以在前面define后再用变量+数组
    int min = numbers[0];//不能定义为0，前面的数组都是整数，后面会返回0，
    // 可以定义为数组中某个数字，如这样进行访问
    //(1)[]:subscript operator 下标
    //（2）i < NUM:not i <= NUM
    //(3)i++:++i
    //(4) int i = 1;since c99 之前版本里定义和声明要分开，
    // 只能在for循环里面定义i,在外面再定义会报错
    for (int i = 0; i < NUM;i++) {//就算那三部分没有，分号一定要有。
        if (numbers[i] < min) {
            min = numbers[i];
        }
    }/*
 *  for (1;2;3){
 *  4
 * }
 * 运行顺序为：1(初始化)>2(判断该逻辑表达式是否成立)>4(主体部分)>3
 */
    printf("%d\n",min);
    return 0;
}