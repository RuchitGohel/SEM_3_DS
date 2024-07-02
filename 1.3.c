//1.3 Create arrays A,B,C and perform c=a+b

#include<stdio.h>
#include<conio.h>

void main()
{
    int A[10], B[10], C[10], i;

    printf("\nEnter 10 elements for array A:");

    for(i=0;i<10;i++)
    {
        scanf("%d", &A[i]);
    }

    printf("\nEnter 10 elements for array B:");

    for(i=0;i<10;i++)
    {
        scanf("%d", &B[i]);
    }

     printf("\nElements of array C are:");
    for(i=0;i<10;i++)
    {
        C[i]=A[i]+B[i];

        printf("%d  ",C[i]);
    }
}
