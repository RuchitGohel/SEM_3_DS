/*
2.3 - Write a program to print strings in reverse order using stack.
*/

#include<stdio.h>

char stack[50];
int top=-1;

void push(char c);
void pop();

void main()
{
    int n;
    char name[10];

    printf("\nEnter a string:");
    scanf("%s", name);

    n=strlen(name);

    for(int i=0; i<n; i++)
    {
        push(name[i]);
    }
    for(int i=0;i<n;i++)
    {
        pop();
    }
}

void push(char c)
{
    top++;
    stack[top]=c;
}
void pop()
{
    char c;
    c=stack[top];
    printf("reverse of string is: %c", c);
    top--;
}
