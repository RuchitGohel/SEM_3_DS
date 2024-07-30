/*
Define a structure
*/

#include<stdio.h>

struct student{
 int roll_no;
 char grade[2];
 char name[20];
};
void main()
{
    struct student s1;
    printf("\nEnter roll_no;");
    scanf("%d", &s1.roll_no);
    printf("\nEnter grade:");
    scanf("%s", s1.grade);
    printf("\nEnter name:");
    scanf("%s", s1.name);

    printf("\nRoll NO: %d", s1.roll_no);
    printf("\nGrade: %s", s1.grade);
    printf("\nName: %s", s1.name);
}
