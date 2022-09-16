#include <stdio.h>

int Function01(int,int,int);

int main()
{
    int a,b,c;
    scanf("%d\n", &a);
    scanf("%d\n", &b);
    scanf("%d", &c);
    if(Function01(a,b,c) == 0)
        printf("a+b is the most valuable");
    else if(Function01(a,b,c) == 1)
        printf("a+c is the most valuable");
    else
        printf("b+c is the most valuable");
    return 0;
}

int Function01(int x,int y,int z)
{
    if((x+y > x+z) && (x+y > y+z))
        return 0;
    else if((x+z > x+y) && (x+z > y+z))
        return 1;
    else 
        return 2;
}
