#include <stdio.h>

int main()
{
    int num1,num2,a;
    scanf("%d\n", &num1);
    scanf("%d", &num2);
    if(num1<num2){
        a = num1;
    }
    else{
        a = num2;
    }
    for(a ; a>1 ; a--){
        if((num1%a == 0) && (num2%a == 0)){
            printf("%d ", a);
            a = 1;
        }
    }
    return 0;
}
