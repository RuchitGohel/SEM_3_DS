/*
2.8 Write a program to find minimum and maximum using recursion.
*/

#include<stdio.h>

void minimum();
void maximum();

void main()
{
    int n1=0,n2=0;

    printf("\nEnter a number:");
    scanf("%d", &n1);
    printf("\nEnter a number:");
    scanf("%d", &n2);
    minimum();
    maximum();
}

void minimum(int n1, int n2)
{
    int min=0;
    if(n1<n2)
    {
        min=n1;
    }else{
        min=n2;
    }
    printf("\nMinimum value amongst two is : %d", min);
}
void maximum(int n1, int n2)
{
    int max=0;
    if(n1>n2)
    {
        max=n1;
    }else{
        max=n2;
    }
    printf("\nMinimum value amongst two is : %d", max);
}

