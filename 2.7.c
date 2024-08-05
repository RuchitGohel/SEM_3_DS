/*
2.7 Write a program to find smallest common division of a given number.
*/


#include<stdio.h>

void main()
{
    int lcd=1, n1, n2, i,j;

    printf("\nEnter a number:");
    scanf("%d", &n1);
    printf("\nEnter a number:");
    scanf("%d", &n2);

    if(n1 < n2){
        i=n1;
    }else{
        i=n2;
    }
    for(j=2;j<=i;j++)
    {
        if(n1%j==0 && n2%j==0)
        {
            lcd=j;
            break;
        }
    }
    printf("\nThe l.c.d. for two numbers %d and %d is:%d", n1, n2, lcd);
}
