/*
Create arrays A and B of size 3 and merge A and B in C
*/


#include<stdio.h>

void main()
{
    int a[3], b[3], c[6], i;

    printf("\nEnter 3 elements for array a:");

    for(i=0;i<3;i++)
    {
        scanf("%d", &a[i]);
    }

    printf("\nEnter 3 elements for array b:");
    for(i=0;i<3;i++)
    {
        scanf("%d", &b[i]);
    }

    for(i=0;i<3;i++)
    {
        c[i]=a[i];
    }
    for(i=0;i<3;i++)
    {
        c[i+3]=b[i];
    }

    printf("\nMerged array:\n");
    for(i=0;i<6;i++)
    {
        printf("%d ", c[i]);
    }
}
