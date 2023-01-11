#include <stdio.h>
/*print Celsius-Fahrenheit table*/
int main()
{
    float celsius,fahr;
    int upper,lower,step;
    upper = 300;
    lower = 0;
    step = 20;
    for(celsius = lower; celsius<=upper;celsius+=step)
    {
        //celsius = (5.0/9.0) * (fahr-32.0);
        fahr = (celsius * (9.0/5.0))-32.0;
        printf("%3.0f %6.1f\n",celsius,fahr);

    }
}