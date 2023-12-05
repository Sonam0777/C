#include <stdio.h>
#include <stdlib.h>

int main()
{
    int n,i,*ptr;
    printf("enter total number of elements ");
    scanf("%d",&n);

    ptr=(int*)malloc(n*sizeof(int));

    if(ptr==NULL)
    {
        printf("Memory not allocated...");
        exit(0);
    }
    else
    {
        printf("enter array elements ");
        for(i=0;i<n;i++)
        {   
            scanf("%d",(ptr+i));
            //or ptr[i]=i+1; here ptr will contain the address of value 1 2 3 4 5 depending upon the n.
        }

        printf("\nthe array elements are \n");
        for(i=0;i<n;i++)
        {
            printf("%d ",*(ptr+i));
        }
    }
    free(ptr);
    return 0;
}