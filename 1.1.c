//create an array of size 10, input values and print the array and search an element in the array

#include<stdio.h>
#include<conio.h>

void main()
{
    int arr[100], x, i;
    int ans=0;

    printf("\nEnter 10 elements for array:");

    for(i=0;i<10;i++)
    {
        scanf("%d", &arr[i]);
    }
    printf("\nThe array elements are:\n");
    for(i=0;i<10;i++)
    {
        printf("%d  ", arr[i]);
    }

    printf("\nEnter the element to search from the array:");
    scanf("%d", &x);

    for(i=0;i<10;i++)
    {
        if(arr[i]==x)
        {
            ans=1;
            break;
        }
    }
    if(ans==1)
    {
        printf("\nValue found at position %d", i+1);
    }
    else
    {
        printf("\nValue not found.");
    }
}
