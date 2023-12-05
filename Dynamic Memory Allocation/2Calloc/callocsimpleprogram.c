#include <stdio.h>
#include <stdlib.h>

int main()
{
    int n,i,*ptr;
    printf("enter total number of elements ");
    scanf("%d",&n);

    ptr=(int*)calloc(n,sizeof(int));

    if(ptr==NULL)
    {
        printf("memeory not allocated...");
        exit(0);
    }
    else
    {
        printf("enter array elements ");
        for(i=0;i<n;i++)
        {
            scanf("%d",(ptr+i));
        }

        printf("array elements are: \n");
        for(i=0;i<n;i++)
        {
            printf("%d ",*(ptr+i));
        }
    }
    free(ptr);
    return 0;

}