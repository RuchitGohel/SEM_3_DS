//Bubble sort

#include<stdio.h>
#include<conio.h>

void main()
{
 int array[100],n,i,j,swap;


 printf("\NEnter number of elemnts:");
 scanf("%d", &n);

 printf("\nEnter %d integers\n",n);

 for(i=0;i<n;i++)
 {
  scanf("%d", &array[i]);
 }
 for(i=0;i<n-i-1;i++)
 {
  for(j=0;j<n-i-1;j++)
  {
   if(array[j]>array[j+1])
   {
    swap=array[j];
    array[j]=array[j+1];
    array[j+1]=swap;
   }
  }
 }
 printf("\nSorted list in ascending order:");

 for(i=0;i<n;i++)
  printf("\n%d",array[i]);

  getch();
}
