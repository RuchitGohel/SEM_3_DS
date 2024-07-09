/*
1.7 Delete an element from the array from user defined position.
*/
#include<stdio.h>

void main()
{
    int a[10], pos, i;

    for(i=0;i<10;i++)
    {
            printf("\nEnter 10 digits for the array:");
            scanf("%d", &a[i]);
    }

    printf("\nArray :\n");
    for(i=0;i<10;i++)
    {
        printf("a[%d]=%d\n ", i+1, a[i]);
    }

    printf("\nEnter position of the element you want to delete:");
    scanf("%d", &pos);

     for(i=pos;i<10;i++)
    {
        a[i-1]=a[i];
    }

    printf("\nRevised Array :\n");
    for(i=0;i<9;i++)
    {
        printf("\na[%d]=%d", i+1, a[i]);
    }
}

