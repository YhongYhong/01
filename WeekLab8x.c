#include <stdio.h>
#include <string.h>

int main()
{
    char text[60]="",a[20][70];
    int i=0;
    FILE *fp;
    fp = fopen("C:\\temp\\data.txt", "w");
    printf("Input data string:\n");
    while(text[0] != '.'){
        scanf("%s", &text);
        strcpy(a[i] , text);
        i++;
    }
    for(int n=0 ; n<i ; n++){
        fprintf(fp, "%s\n", a[n]);
    }
    fclose(fp);
    return 0;
}