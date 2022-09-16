#include <stdio.h>

int main()
{
    int a,b,c;
    scanf("%d\n", &a);
    scanf("%d\n", &b);
    scanf("%d", &c);
    if(a>b){
        if(b>c)
            printf("a+b is the most valuable");
        else
            printf("a+c is the most valuable");
    }
    else if(b>a){
        if(c>a)
            printf("b+c is the most valuable");
        else
            printf("a+b is the most valuable");
    }
    return 0;
}
