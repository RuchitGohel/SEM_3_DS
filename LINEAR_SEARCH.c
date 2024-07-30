//Linear search

#include<stdio.h>
#include<conio.h>

void main()
{
 int a[20],x,n,i;

 printf("\nHow many elements?:");
 scanf("%d", &n);

 printf("\nEnter array elements:");
 for(i=0;i<n;i++)
 {
  scanf("%d", &a[i]);
 }
printf("\nEnter element to search:");
scanf("%d", &x);

for(i=0;i<n;i++)
{
 if(a[i]==x)
 break;
}
if(i<n)
 printf("\nElement found at index %d", i);
 else
 printf("\nElement not found.");
 getch();
}
