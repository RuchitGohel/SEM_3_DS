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
    int i;
    double val;
    printf("\nEnter base value:");
    scanf("%d", &base);
    printf("\nEnter power value:");
    scanf("%d", &power);
    for(i=0;i<=power;i++)
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
    int i;
    for(i=0;i<power;i++)
    {
        val=stack[top];
        m*=val;
        top--;
    }
    printf("\n%d", m);
}
