//step-1: Enter base value
//step-2: Enter power value
//step-3: loop 1 to
//stack[top]=b

/*
2.5 Write a program to find value of power for a number
*/

#include<stdio.h>

void push();
void pop();
int top=-1;
int power;
int base;
int val=1;
int stack[50];

void main()
{
    double val;
    printf("\nEnter base value:");
    scanf("%d", &base);
    printf("\nEnter power value:");
    scanf("%d", &power);
    for(int i=0;i<=power;i++)
    {
        push(base);
    }
    pop();
}
void push(int base)
{
    top++;
    stack[top]=base;
}
void pop()
{
    int m=1;

    for(int i=0;i<power;i++)
    {
        val=stack[top];
        m*=val;
        top--;
    }
    printf("\n%d", m);
}
