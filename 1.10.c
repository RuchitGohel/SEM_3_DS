/*
16-07-2024
1.10- Create a program to multiply two matrix
*/

#include<stdio.h>
void main()
{
    int m1[5][5], m2[5][5], m3[5][5], i, j, k, r1, c1, r2, c2;

    printf("\nEnter number of rows for matrix1 :\n");
    scanf("%d", &r1);
    printf("\nEnter number of columns matrix1 :\n");
    scanf("%d", &c1);

    printf("\nEnter number of rows for matrix2 :\n");
    scanf("%d", &r2);
    printf("\nEnter number of columns matrix2 :\n");
    scanf("%d", &c2);

    printf("\nEnter elements for matrix1 :\n");
    if(c1==r2)
    {


    for(i=0;i<r1;i++)
    {
        for(j=0;j<c1;j++)
        {
            scanf("%d", &m1[i][j]);
        }
    }
    printf("\nEnter elements for matrix2 :\n");
    for(i=0;i<r2;i++)
    {
        for(j=0;j<c2;j++)
        {
            scanf("%d", &m2[i][j]);
        }
    }

    printf("\nMatrix1:\n");
    {
     for(i=0;i<r1;i++)
     {
         for(j=0;j<c1;j++){
            printf("%d ", m1[i][j]);
         }
         printf("\n");
     }
    }
    printf("\nMatrix2:\n");
    {
     for(i=0;i<r2;i++)
     {
         for(j=0;j<c2;j++){
            printf("%d ", m2[i][j]);
         }
         printf("\n");
     }
    }

    for(i=0;i<r1;i++)
    {
        for(j=0;j<c2;j++)
        {
            m3[i][j] = 0;
            for(k=0;k<r2;k++){
                m3[i][j] += m1[i][k] * m2[k][j];
            }
        }
    }
    printf("\nMultiplication of two matrix is matrix3:\n");
    for(i=0;i<r1;i++)
    {
        for(j=0;j<c2;j++)
        {
            printf("%d ", m3[i][j]);
        }
        printf("\n");
    }
    }
    else{
        printf("\nMultiplication is not possible.");
    }
}
