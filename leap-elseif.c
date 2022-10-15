//
// Created by Wenzc on 2022/10/10.
//
#include <stdio.h>

int main(){
    int leap = 0;
    int year = 0;
    scanf("%d",&year);

      //找充要条件  &&表示and，||表示或者
   if ((year % 4 == 0 && year % 100 != 0) || (year % 400 == 0)){//这里可以直接将表达式赋值给leap
    //c语言会短路求值：and语句中前半部分成立就不在求后半部分，or语句中前面成立就不在求后半部分
      //不知道先后顺序就都加括号
      //可以用！表示取反，即 ! (year %100 == 0)
    leap = 1;
   } else {
       leap = 0;
   }//这里else可以不要,前面已经给赋值leap为0了
       if (leap == 0){
           printf("The year %d is a common year.\n",year);
       } else {
           printf("The year %d is a leap year。\n",year);
       }

       return 0;
   }
