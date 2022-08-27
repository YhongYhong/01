#include <stdio.h>
int main()
{
    long long n,x,sum1=0,sum2=0,sum3=0;
    scanf("%lld", &n);
    while(n>0){
        x=n%10;
        sum1=sum1+x;
        n=n/10;
    }
    while(sum1>0){
        x=sum1%10;
        sum2=x+sum2;
        sum1=sum1/10;
    }
    while(sum2>0){
        x=sum2%10;
        sum3=x+sum3;
        sum2=sum2/10;
    }
    printf("%lld", sum3);
}