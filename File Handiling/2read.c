#include <stdio.h>
#include <stdlib.h>

int main()
{
    FILE *fp;
    char c;
    char str[10];

    fp=fopen("abc.txt","r");

    if(fp==NULL)
    {
        printf("error ");
        exit(0);
    }

    /*while(!feof(fp))
    {
    c=fgetc(fp);
    printf("%c",c);
    }*/

    while(!feof(fp))
    {
        fgets(str,10,fp);
        printf("%s",str);
    }

    fclose(fp);
}