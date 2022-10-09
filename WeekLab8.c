#include <stdio.h>
#include <string.h>

int main()
{
    char text[60]="";
    printf("Input data string:\n");
    FILE* fp;
    fp = fopen("C:\\temp\\data.txt", "w");
    do{
        scanf("%s", &text);
        fprintf(fp ,"%s\n", text);
    }
    while(text[0] != '.');
    fclose(fp);
    return 0;
}