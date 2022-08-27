#include <stdio.h>
int main()
{
    long long n,x,sum=10;
    scanf("%lld", &n);
    while(sum>=10){    
        sum=0;
        while(n>0){
            x=n%10;
            sum=sum+x;
            n=n/10;
        }
        n=sum;
    }
    printf("%lld", n);
}