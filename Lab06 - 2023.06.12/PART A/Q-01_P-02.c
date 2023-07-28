#include<stdio.h>
int main()
{
//assigning variables
int n,v;
//getting input
printf("Enter a Number ");
scanf("%d",&n);
//process
v=n%2;
 // switch statement
    switch (v) {
        case 0:
            printf("%d is an even number", n);
            break;
        default:
            printf("%d is an odd number", n);
            break;

        }
}
