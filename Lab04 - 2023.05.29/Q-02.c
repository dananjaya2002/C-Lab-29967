#include<stdio.h>
int main()
{
//assigning variables
    int x,y,z,max,min;
//getting input
    printf("Enter the first number:- ");
    scanf("%d",&x);
    printf("Enter the second number:- ");
    scanf("%d",&y);
    printf("Enter the third number:- ");
    scanf("%d",&z);
//condition statement
    max= x;
    min=y;
    if(y>max)
        max=y;
    if(z>max)
        max= z;
    if(min>x)
        min=x;
    if(min>z)
        min=z;
    printf("%d is the largest value \n",max);
    printf("%d is the smallest number \n",min);
}


