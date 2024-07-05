/*
1.6 Insert an element into the array at user defined position.
*/
#include<stdio.h>

void main()
{
    int a[10], pos, x, i;

    for(i=0;i<10;i++)
    {
            printf("\nEnter an element and its index you want to insert it at:");
            scanf("%d", &x);
            printf("\nEnter the position you want to insert it at:");
            scanf("%d", &pos);

            i=pos;
            a[i]=x;
    }

    printf("\nArray :\n");
    for(i=0;i<10;i++)
    {
        printf("%d ", a[i]);
    }



}
