/*
1.8 Sort the array into ascending order.
*/


#include<stdio.h>

void main()
{
    int a[100], n, i, j, temp=0;

    printf("\nEnter number of elements for array a:");
    scanf("%d", &n);
    for(i=0;i<n;i++)
    {
        scanf("%d", &a[i]);
    }
    printf("\nArray:\n");
    for(i=0;i<n;i++)
    {
        printf("a[%d]=%d\n", i, a[i]);
    }

    for(i=0;i<n;i++)
    {
     for(j=i+1;j<n;j++)
     {
         if(a[i]>a[j]){
         temp=a[i];
         a[i]=a[j];
         a[j]=temp;
     }
     }
    }
    printf("\nAscending order:\n");

    for(i=0;i<n;i++)
    {
        printf("\n a[%d]=%d", i, a[i]);
    }
}
