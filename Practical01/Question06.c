#include<stdio.h>
int main()
{
//assigning variables
    int by,age;
    char stn[20];
//getting inputs
    printf("Enter student name :- ");
    scanf("%s",&stn);
    printf("Enter Birth year :- ");
    scanf("%d",&by);
//process
    age=2023-by;
//getting output
    printf("%s's age is %d",stn,age);

}

