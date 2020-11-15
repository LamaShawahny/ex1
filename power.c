#include "myMath.h"
// c.power


double Power(double x , int y)
{
    if (y == 0) 
        return 1; 
    else if (y%2 == 0) 
        return power(x, y/2)*power(x, y/2); 
    else
        return x*power(x, y/2)*power(x, y/2); 
}



double Exponent(int x)
{
    double exp =1;
    for(int i=10;i>0;i--){
        e= 1+exp/i;
    }
    return Power(exp,x);

}