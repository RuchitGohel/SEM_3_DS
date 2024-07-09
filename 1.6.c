/*
1.6 Insert an element into the array at user defined position.
*/
#include<stdio.h>

void main()
{
    int a[10], pos, i;

    for(i=0;i<10;i++)
    {
            printf("\nEnter position:");
            scanf("%d", &pos);
            printf("\nEnter value:");
            scanf("%d", &a[pos-1]);
    }

    printf("\nArray :\n");
    for(i=0;i<10;i++)
    {
        printf("a[%d]=%d\n ",i, a[i]);
    }



}
