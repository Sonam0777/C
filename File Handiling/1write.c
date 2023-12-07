#include <stdio.h>
#include <stdlib.h>

int main()
{   
    int i = 10;
    FILE *fp;
    char ch = 'a';

    fp=fopen("abc.txt","w");

    if(fp==NULL){
        printf("error opening the file.\n");
        exit(0);
    }
   /*printf("enter any string ");
    scanf("%[^\n]",str);*/
    //fputs(str,fp);

    /*for(i=0;str[i]!='\0';i++)
    {
        fputc(str[i],fp);
    }*/

    fprintf(fp,"%d %c",i,ch);
    fclose(fp);
    return 0;
}