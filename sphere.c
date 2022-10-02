//
// Created by Wenzc on 2022/10/2.
//


#include <stdio.h>
#include <math.h>

int main(){
    const double PI = 3.14159;
    int radius = 100;

    double surface_area = 4 * PI * pow(radius,2);
    double volume = 4.0 / 3 * PI * pow(radius,3);
    //pow:用于计算x的y次方
    //math.h里面有很多数学函数，需要的时候可以去里面找。
/*
 *  在c语言中整数除以整数结果还是整数，例4/3=1，用4.0/3才能得到小数，
 *  4.0为double类型的，这样才能在double中运行得出小数结果
 */
    printf("%-15.4f : surface_area\n%-15.4f : volume\n",
           surface_area,volume);
//要输出15个字符，就在小数点前面加上15，这样输出结果会自动用空格补全15个字符
//15：minimum最小宽度
//默认右对齐，在前面加一个减号即可输出为左对齐
    return 0;
}