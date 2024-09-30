#include<stdio.h>
#include<stdlib.h>

void add();
void myRemove();
void display();
int queue[50];
int max=20;
int front=-1;
int rear=-1;


void main()
{
    int ch;
    while(1);
    {
        printf("\n");
        printf("1. add\n");
        printf("2. remove\n");
        printf("3. display\n");
        printf("4. exit\n");


        printf("Enter your choice:\n");
        scanf("%d", &ch);

        switch(ch)
        {
            case 1: add();
            break;
            case 2: myRemove();
            break;
            case 3: display();
            break;
            case 4: exit(1);
            break;
            default: printf("\nEnter proper choice.");
        }
        }
}

void add()
{
        int val=0;
        if(rear==max-1)
        {
            printf("\nQueue is overflow.");
        }
        else if(rear==-1 && front==-1)
        {
            rear=0;
            front=0;
            printf("\nEnter value:");
            scanf("%d", &val);
            queue[rear]= val;
        }
        else
            {

                rear=rear+1;
                printf("\nEnter value:");
                scanf("%d", &val);
                queue[rear]=val;
            }
}

void myRemove()
{
    int val=0;
    if(front>rear || front==-1)
    {
            printf("\nQueue is empty.");
    }
    else
        {
            val=queue[front];
            printf("\nValue deleted.");
            front++;
        }
}
void display()
{
    int i;
    for(i=front; i<=rear; i++)
    {
        printf("\n%d\n", queue[i]);
    }
}
