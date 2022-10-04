//
// Created by Wenzc on 2022/10/2.
//
#include <stdio.h>

#include <math.h>
#include <ctype.h>

int main(){
    char first_name[] = "Tayu";
    //char表示单个字符，所以在后面加个方括号表示这是个字符串
    char last_name[] = "Lo";
    char gender = 'm';
    //这里仅一个字符，可直接用char，不用【】，且一般一个字符就用单引号

    int birth_year = 1954;
    int birth_month = 7;
    int birth_day = 20;
    char weekday[] = "Tuesday";

    int c_score = 50;
    int music_score = 99;
    int medicine_score = 78;

    double mean = (c_score + music_score +medicine_score) / 3.0;
    //考虑到生成的平均数可能是小数，所以用double类型
    double sd = sqrt((pow(c_score - mean, 2)
            + pow(music_score - mean,2)
            + pow(medicine_score - mean,2)) / 3.0);
    int rank = 10;


    printf("%s %s \t%c\n"
           "%.2d-%d-%d \t %.3s.\n"
           "%d \t %d \t %d \n"
           "%.1f \t %.2f \t %d%%\n",
           first_name,last_name,toupper(gender),
           birth_month,birth_day,birth_year,weekday,
           c_score,music_score,medicine_score,
           mean,sd,rank);
//输出字符串用%s
//sd方差，sqrt为开根号
// \t为tab键功能，产生的间隔会稍微大一点
//一个字符输出用%c
//用toupper可以变大
//%.2d表示该整数在输出时至少有两位，不够的话前面补0
//%.3s表示至多输出三位,s后面的点输出时会跟在输出后面
//用%%输出%
    return 0;
}