#include <stdio.h>
#include <stdlib.h>

int main()
{
    int n,i,*ptr;
    printf("enter the number of elements ");
    scanf("%d",&n);

    ptr=(int*)calloc(n,sizeof(int));

    if(ptr==NULL)
    {
        printf("memory not allocated ");
        exit(0);
    }
    else
    {
        printf("enter array elements ");
        for(i=0;i<n;i++)
        {
            scanf("%d",(ptr+i));
        }

        printf("array elements are : \n");
        for(i=0;i<n;i++)
        {
            printf("%d ",*(ptr+i));
        }
    }

    printf("\nenter total elements ");
    scanf("%d",&n);
    free(ptr);
    float *p=(float*)malloc(n*sizeof(float));

    if(p==NULL)
    {
        printf("memory not allocated...");
        exit(0);
    }
    else
    {
        printf("enter array elements ");
        for(i=0;i<n;i++)
        {
            scanf("%f",(p+i));
        }
        printf("array elements are : \n");
        for(i=0;i<n;i++)
        {
            printf("%.2f ",*(p+i));
        }
    }
    free(p);
    return 0;
}