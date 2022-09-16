#include <stdio.h>

int main()
{
    int num,lastnum1,lastnum2=1;
    scanf("%d", &num);
    if(num >= 100 && num <=999){
        while(num >= 10){
            while(num > 0){
                lastnum1 = num % 10;
                lastnum2 = lastnum1 * lastnum2;
                num = num/10;
            }
            num = lastnum2;
            lastnum2 = 1;
        }
        printf("%d", num);
    }
    return 0;
}