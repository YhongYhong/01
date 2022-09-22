#include <stdio.h>

int main()
{
    int inf=1,input,i,num=0;
    while(inf==1){
        scanf("%d", &input);
        if(input == -99){
            inf++;
        }
        else{
            for(i=1 ; i<=input ; i++){
                if(input % i == 0){
                    num++;
                }
            }
            if(num == 2)
                printf("%d is a prime number\n", input);
            else
                printf("%d is not a prime number\n", input);
        }
        num=0;
    }
    return 0;
}