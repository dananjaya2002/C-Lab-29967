#include<stdio.h>
int main()
{
//assigning variables
    int x,y;
//getting input
    printf("Enter the first number:- ");
    scanf("%d",&x);
    printf("Enter the second number:- ");
    scanf("%d",&y);
//condition statement
    if(x>y)
        printf("%d is the highest number",x);
    else
        printf("%d is the highest number",y);
}

