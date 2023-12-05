#include <stdio.h>
#include <stdlib.h>

int main()
{
    int n,i,*ptr,*p;
    int sum = 0;
    printf("enter total number of elements ");
    scanf("%d",&n);

    ptr=(int*)malloc(n*sizeof(int));
    p=ptr;
    if(ptr==NULL)
    {
        printf("memory not allocated...");
        exit(0);
    }
    else
    {
        printf("enter array elements ");
        for(i=0;i<n;i++)
        {
            scanf("%d",(ptr+i));

        sum=sum+*(ptr+i);
        ptr++;
        }

        printf("\narray elements are \n");
        for(i=0;i<n;i++)
        {
            printf("%d ",*(p+i));
            p++;
        }

        printf("\nthe sum of array is %d",sum);
    }
    free(p);
    return 0;
}