//
// Created by Wenzc on 2022/10/2.
//

#include <stdio.h>

int main(){
    const double MOL = 6.02e23;
    //这里6.02e23表示6.02乘以10的23次方，e/E都行
    const int MOL_PER_GRAM = 32;
    int mass = 6;
    double quantity = mass * 1.0 / MOL_PER_GRAM * MOL;
//仅 / 是在整数范围内进行的，所以结果为0，
//要想进行double内的运算可以乘个1.0
//科学计数法可以加个e即可
    printf("quantity = %.3e\nquantity = %.5g\n",
           quantity,quantity);
    //用.g来表示保留有效数字,.e/.f表示小数点后面有几位
    //注意.g的细节，要去教材那查找

    return 0;
}