#include<stdio.h>

float sqrt1(float x)
{
    float temp, sqrt;
    sqrt = x / 2;
    temp = 0;

    while(sqrt != temp){
        temp = sqrt;

        sqrt = ( x/temp + temp) / 2;
    }
    return sqrt;
}

int main()
{
    float num;
    printf("input your number : ");
    scanf("%f", &num);
    printf("the answer is %.5f", sqrt1(num));
    return 0;
}