#include <stdio.h>
int main()
{
    int a;
    scanf("%d", &a);
    for(int b=2 ; b<=a ; b){
        if(a%b==0){
            printf("%d\t", b);
            a=a/b;
        }
        else
            b++;
    }
    return 0;
}
