#include <stdio.h>

int main()
{
    int num,a=2,sum;
    scanf("%d", &num);
    while(a<=num){
        if(num%a == 0){
            printf("%d\t", a);
            num = num/a;
        }
        else{
            a++;
        }
    }
    return 0;
}
