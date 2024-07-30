/*
Program - 2.1

*/


#include<stdio.h>
#include<stdlib.h>

void push();
void pop();
void update();
void peek();
void display();
int stack[50];
int max=10;
int top = -1;


void main()
{
    int ch;
    while(1);
    {
        printf("\n");
        printf("1. push\n");
        printf("2. pop\n");
        printf("3. update\n");
        printf("4. peek\n");
        printf("5. exit\n");

        printf("Enter your choice:\n");
        scanf("%d", &ch);

        switch(ch)
        {
            case 1: push();
            break;
            case 2: pop();
            break;
            case 3: peek();
            break;
            case 4: update();
            break;
            case 5: exit();
            break;
            default: printf("\nEnter proper choice.");
        }
        }
    }
}
