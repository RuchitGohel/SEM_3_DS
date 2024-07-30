/*
Display use of ENUMERATION
*/

#include<stdio.h>

enum week{Mon, Tue, Wed, Thu, Fri, Sat, Sun};

void main()
{
    enum week w;

    w=Tue;
    printf("\nConstant value of Tuesday is : %d", w);
}
