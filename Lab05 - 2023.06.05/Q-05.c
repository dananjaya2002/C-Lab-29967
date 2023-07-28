#include<stdio.h>

int main()
{
//assigning variables
    int x,y,multi;

//getting inputs
    printf("enter the first number: ");
    scanf("%d",&x);
    printf("enter the second number: ");
    scanf("%d",&y);

//process
    multi = x % y;

//condition statement and output
    if (multi == 0) {
        printf("%d is a multiple of %d",x,y);
    }
    return 0;

}
