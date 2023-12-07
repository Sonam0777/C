/*Write a C program that dynamically allocates memory for an array of integers.
 Prompt the user to enter the size of the array and then input the elements.
 Afterward, implement a function to find the sum of all the elements in the dynamically allocated array. 
 Don't forget to free the allocated memory to prevent memory leaks. */


 #include <stdio.h>
 #include <stdlib.h>

int sum(int *ptr1,int n)
{
    int s=0,i;
    for(i=0;i<n;i++)
    {
        s=s+*(ptr1+i); 
    }
    return s;
}
 int main()
 {
    int n,i,*ptr;
    printf("enter total number of elements ");
    scanf("%d",&n);

    ptr=(int*)calloc(n,sizeof(int));

    if(ptr==NULL)
    {
        printf("memory not allocated..");
        exit(0);
    }
    else
    {
        printf("enter array elements ");
        for(i=0;i<n;i++)
        {
            scanf("%d",(ptr+i));
        }
    }
    int t = sum(ptr,n);

    printf("\nsum of array is %d",t);
    free(ptr);
    return 0;
 }