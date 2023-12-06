#include <stdio.h>
#include <stdlib.h>
int main()
{
    int n,i;
    int *ptr,*ptr1;
    printf("enter total number of elements ");
    scanf("%d",&n);

    ptr=(int*)malloc(n*sizeof(int));
    ptr1=(int*)calloc(n,sizeof(int));

    if(ptr==NULL||ptr1==NULL)
    {
        printf("memory not allocated..");
        exit(0);
    }
    else{
        printf("mempory successfully allocated using malloc\n");
        free(ptr);
        printf("\nmalloc memory successfully freed.\n");

        printf("mempory successfully allocated using calloc\n");
        free(ptr1);
        printf("\ncalloc memory successfully freed.\n");
    }
    return 0;
}