#include<stdio.h>

float sqrt1(float x)
{
    int digit=1;
    float check,i;
    float decimal=0.00001,cal=0.00001;

    for(i=0 ; (i*i) <= x || check == i ; i++ ){
        check = i;
    }
    i--;
    // printf("i = %f\n", check);
    if((i*i) != x)
    {
        if(x /1000 > 65)
        {
            check=x;
            cal=cal*10;
            while(check /1000 > 100){
                cal = cal*10;
                check = x/1000;
                break;
            }
        }
        while(1)
        {
            i=i+cal;

            if(((i*i) <= x+decimal && (i*i) >= x-decimal) || (i*i) > x+0.5)
                break;

            if((i*i) > x){
                decimal=decimal+0.00001;
                // printf("first change = %f\n limit is %f-%f\n", i*i, x+decimal,x-decimal);
                i=i-0.00001;
            }
        }
    }
    // printf("%f\n", decimal);
    return i;
}

int main()
{
    float num;
    printf("input your number : ");
    scanf("%f", &num);
    printf("the answer is %.5f", sqrt1(num));
    return 0;
}

