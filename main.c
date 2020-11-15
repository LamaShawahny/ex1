#include <stdio.h>
#include "myMath.h"
 #define function1(x) sub(add(Exp((int)x), Pow(x, 3)), 2)      //f(x) = e^x + 𝑥^3 − 2
#define function2(x) add(mul(x, 3), mul(Pow(x, 2), 2))        //f(x) = 3x + 2X^2
#define function3(x) sub(div(mul(4,pow(x,3),5),mul(2,x))      //f(x) = (4x^3)/5 -2x
int main()
{
   float first, second, sum,subnum ;
   double    num1 ,emulF, pow;
,  int num2, exp;
   
   scanf("%f%f", &first, &second);
 
   sum = add(first, second);
   subnum = sub(first, second);  
   mulF=mul(first, second);  
   pow=power(num1,num2);
   exp=Exponent(num2);
   printf("sum=%f\n subnum=%f mulF=%d" pow=%d  exp=%d  , sum,subnum,mulF,pow,exp);
 
printf ("please insert a real number:");
double x;
 scanf("%lf", &x);
 float result;
  result=function1(x);
 printf(" function(1) - f(x) = e^x + x^3 - 2 , f(%.4f) = %.4f\n", x, result);
 result=function2(x);
  printf(" function(2) -  f(x) = 3x + 2x^2 , f(%.4f) = %0.4f\n", x, result);
 result=function3(x);
  printf(" function(3) - f(x) = (4x^3)/5 - 2x - 2 , f(%.4f) = %.4f\n", x, result);

   return 0;
}