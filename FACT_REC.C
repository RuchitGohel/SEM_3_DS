/*
2.2 Write a program to find the factorial of a number using recursion
*/

#include<stdio.h>

int factorial(int n);

int main()
{
    int n,z;
    printf("\nEnter value:");
    scanf("%d", &n);

    z=factorial(n);
    printf("\nFactorial is: %d",z);
    return 0;
}
int factorial(int n)
{
    int f;
    if(n==1)
    {
        return 1;
    }
    else{
        f=n*factorial(n-1);
        return f;
    }
}


