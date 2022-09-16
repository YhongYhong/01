#include <stdio.h>

int main()
{
    int num,one,hund,thous;
    scanf("%d", &num);
    if(num >= 100 && num <= 999){
        while(num >= 10){    
            one = num % 10;
            hund = (num/10) % 10;
            thous = (num/100) % 10;
            num = one * hund * thous;
            if(num < 100){
                one = num % 10;
                hund = (num/10) % 10;
                num = one * hund;
            }
        }
        printf("%d", num);
    }
    return 0;
}
