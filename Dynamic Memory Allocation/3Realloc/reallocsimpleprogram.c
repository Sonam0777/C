#include <stdio.h>
#include <stdlib.h>

int main()
{
    int n, i, *ptr;
    printf("enter total number of elements ");
    scanf("%d", &n);

    ptr = (int *)malloc(n * sizeof(int));

    if (ptr == NULL)
    {
        printf("memory not allocated...");
        exit(0);
    }
    else
    {
        printf("enter array elements : ");
        for (i = 0; i < n; i++)
        {
            scanf("%d", (ptr + i));
        }
    }
    int newsize;
    printf("enter new size of array ");
    scanf("%d", &newsize);

    int *ptr1 = (int*)realloc(ptr, newsize * sizeof(int));

    if (ptr1 == NULL)
    {
        printf("memory not allocated...");
        exit(0);
    }
    else
    {
        if (newsize > n)
        {
            printf("enter new array elements ");
            for (i = n; i < newsize; i++)
            {
                scanf("%d", (ptr1 + i));
            }
        }
        printf("address of original array %d and address of new array %d", ptr,ptr1);

        printf("\narrays are \n");
        for (i = 0; i < newsize; i++)
        {
            printf("%d ", *(ptr1 + i));
        }
    }
    free(ptr1);
    return 0;
}
