//
// Created by Wenzc on 2022/10/7.
//
/*  Avoid UNDEFINED BEHAVIOR 未定义行为UBS
 *  code style
 *  ?...:  三目运算符
 */
#include <stdio.h>
//先赋一个初始值，为
int main(){
    int a = 0;
    int b = 0;
    scanf("%d%d",&a,&b);
    int min = 0;
    if (a >= b) {
        min = b;//只有一条语句时花括号可以省，但是最好不要省
    } else {
        min = a;
    }
    // 上述语句可以用三目运算符来表示，min = a >= b ? b : a;表示先判断a >= b是否成立，
    // 成立则输出b，不成立则输出a
    //最好不要在复杂的时候用，不要用太多
    //不要用太多技巧！！！
    printf("min{%d,%d} = %d",a,b,min);
    return 0;
}
