//Create an array of size 10 and find the largest value among it

#include<stdio.h>

void main()
{
    int a[10], max, i;

    printf("\nEnter 10 elements for array:");
    for(i=0;i<10;i++)
    {
        scanf("%d", &a[i]);
    }

    max=a[0];

    for(i=0;i<10;i++)
    {
        if(a[i]>max)
        {
            max=a[i];
        }
    }
    printf("\n\nLargest value is : %d", max);
}
