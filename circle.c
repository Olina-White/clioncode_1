//
// Created by Wenzc on 2022/10/2.
//

#include <stdio.h>

//目的：求周长（circumference)和面积（area）
int main(){

 /*
  * Declare/Define a variable called radius.
  * The type of radius is int(integer).
  * radius is initialized(初始化) to 10.
  * You can assign other integers to radius.
  * radius refers to a location(&radius)in memory.
  */
    //先声明一个变量
    int radius = 10;
//在进行更多运算时总是用3.14159很不方便，还会容易漏掉某处，故用一个变量去替换它
    const double PI = 3.14159;
//用const来表达变量在整个程序运行过程中都不会变，用这个后程序不允许改变该变量
//习惯：用const的变量用大写
//选中变量选择refactor>>rename可以同时修改该变量
    double circumference = 2 * PI * radius;
    double area = PI * radius * radius;

    printf("circumference = %.2f\narea = %.2f\n",
           circumference,area);
//前面的叫格式串，有 % 时要解释
//有 %f 且不做任何解释的话默认保留六位小数
// %.nf 意为小数点后面保留n位小数
//格式串里面%。2f里面的点不是小数点，只是起分隔作用
    return 0;
}