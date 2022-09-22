#include <stdio.h>

int main()
{
    int inf=1,input;
    while(inf==1){
        scanf("%d", &input);
        if(input != -99){
            if(input == 1){
                printf("%d is not a prime number\n", input);
            }
            else{   
                for(int i=2 ; i<=input ; i++){
                    if(input % i == 0 && i != input){
                        printf("%d is not a prime number\n", input);
                        i = input+1;
                    }
                    else if(input % i == 0 && i == input){
                        printf("%d is a prime number\n", input);
                        i = input+1;
                    }
                }
            }
        }
        else
            inf++;
    }
    return 0;
}