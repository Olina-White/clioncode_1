//
// Created by Wenzc on 2022/10/1.
//

#include <stdio.h>
#include <time.h>
#include <stdlib.h>

int main(){
    int high = 100;
    int number_of_tries = 7;
    /*
     * (1)print the rules of the game to players.
    / * (2)generate a random number between 1 and high as the secret number.
    / * (3)ask the player to input his/her guess.
     * (4)obtain the guessed number,compare it with the secret number,and inform
     * the player
     * (5)repeat (3) and (4) until the player wins or loses.
     */
   printf("Let us play the Number game.\n"
          "The computer will generate a random number between 1 and %d.\n"
          "You have %d tries.\n",
          high,number_of_tries);
//不能直接写100
//% mod 取余 例 5 % 3 = 2
/*
 * 单单使用rand() 函数来生成随机数是不行的，
 * 因为它每玩一次生成的随机数都是相同的，即随机数不随机，所以要通过srand()函数，
 * 种下一个随机种子，来产生随机数。根据时间每时每刻都是变化的，可以用time()时间函数来产生种子。
 *
 */


   srand(time(NULL));
   int secret = rand() % high + 1;
   printf("Test:secret = %d\n",secret);
    //循环语句
   while (number_of_tries > 0 ) {
       printf("Please input your guess number.\n"
              "You still have %d tries.\n", number_of_tries);
       //写大程序时要每写一点就要运行一下
       int guess = 0;
       scanf("%d", &guess);
       printf("Test:guess = %d.\n", guess);
//选择语句 if...else
       if (guess == secret) {
           printf("You win!\n");
           break;
       } else if (guess > secret) {
           printf("guess > secret\n");
       } else {
           printf("guess < secret\n");
       }
       number_of_tries = number_of_tries - 1;
       //也可以写作number_of_tries--;

//break只跳出内循环，不是跳出所有循环

   }
            return 0;
}