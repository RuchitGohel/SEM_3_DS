//create an array of size 10, find the sum and average of the elements

#include<stdio.h>

void main()
{
    int arr[100], n, i, sum=0;
    float avg;

    printf("\nEnter number of elements for array:");
    scanf("%d", &n);

    for(i=0;i<n;i++)
    {
        scanf("\n%d", &arr[i]);
        sum+=arr[i];
    }
    printf("\n\nThe array elements are:\n\n");
    for(i=0;i<n;i++)
    {
        printf("%d  ", arr[i]);
    }

    printf("\n\nSum of the array elements is:%d", sum);

    avg=sum/n;

    printf("\n\nThe average of the sum of array elements is: %f" , avg);
}
