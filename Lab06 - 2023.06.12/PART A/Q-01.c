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
//condition statement
if(v==0)
    printf("%d is a even number",n);
else
    printf("%d is a odd number",n);

}
