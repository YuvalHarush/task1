/******************************************************************************
                            Online C Compiler.
                Code, Compile, Run and Debug C program online.
Write your code in this editor and press "Run" button to compile and execute it.
*******************************************************************************/

#include <stdio.h>
#include "myMath.h"

int main(void)
{
    double chNum; float resulti, resultii, resultiii;
    printf("Welcom, this app will calculate result of pre-entered equations with given constants\n");
    printf("The equations are:\n");
    printf("  i) f(x) = e^x + x^3 -2\n");
    printf(" ii) f(x) = 3x + 2(x^2)\n");
    printf("iii) f(x) = (4(x^3))/5 - 2x\n");
    printf("please insert a real number as value of 'x'\n");
    scanf(" %lf", &chNum);
    resulti= (expo(chNum) + power (chNum, 3) -2);
    resultii= (mul(chNum,3) + mul(2, power(chNum,2)));
    resultiii= (divi(mul(4, power(chNum,3)),5) - mul(2,chNum));
    printf ("The value of f(x) = e^x + x^3 -2 at point %0.4lf is: %0.4f\n", chNum, resulti);
    printf ("The value of f(x) = 3x + 2(x^2) at point %0.4lf is: %0.4f\n", chNum, resultii);
    printf ("The value of f(x) = (4(x^3))/5 - 2x at point %0.4lf is: %0.4f\n", chNum, resultiii); 


}