#include <stdio.h>
int main()
{
    int num1,num2,sum;
    scanf("%d\n", &num1);
    scanf("%d", &num2);
    for(int x=2 ; x<=num1 || x<=num2 ; x++){
        if((num1%x==0) && (num2%x==0)){
            sum=x;
        }
    }
    printf("%d", sum);
    return 0;
}