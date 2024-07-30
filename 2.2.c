#include<stdio.h>

void push();
void pop();
void display();
void update();
void peek();
int a[50];
int max=10;
int top=-1;

void main()
{
    int ch;
    while(1)
    {
        printf("\n");
        printf("1. Push\n");
        printf("2. Pop\n");
        printf("3. Update\n");
        printf("4. Peek\n");
        printf("5. Display\n");
        printf("6. Exit\n");
        printf("Enter your choice.");
        scanf("%d", &ch);

        switch(ch)
        {
            case 1: push();
                break;
            case 2: pop();
                break;
            case 3: update();
                break;
            case 4: peek();
                break;
            case 5: display();
                break;
            case 6: exit(1);
                break;
            default: printf("\nEnter proper choice.");
        }
    }
}

void push()
{
    int val;
    if(top==max-1)
    {
        printf("\nStack overflow.");
    }
    else
    {
        printf("\nEnter value:");
        scanf("%d", &val);
        top++;

        a[top] = val;
    }
}

void pop()
{
    int val;
    if(top==-1)
    {
        printf("\nStack is empty.");
    }
    else
    {
        val = a[top];
        printf("\nValue deleted=%d", val);
        top--;
    }
}

void display()
{
    int i;
    for(i=top;i>=0;i--)
    {
        printf("%d", a[i]);
    }
}
void peek()
{
    int val;
    if(top==-1)
    {
        printf("stack is empty.");
    }
    else
    {
        val = a[top];
        printf("\nPeek is:%d", val);
    }
}


void update()
{
    int new_value, i;
    printf("\nEnter the element index number you want to update:");
    scanf("%d", &i);

    printf("\nEnter new value:");
    scanf("%d", &new_value);

    a[i] = new_value;
}
