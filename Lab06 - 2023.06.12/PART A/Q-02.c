#include<stdio.h>
int main()
{
//assigning variables
int n1,n2;
char t;
//getting input
printf("Enter the first Number: ");
scanf("%d", &n1);
printf("Enter the second Number: ");
scanf("%d", &n2);
printf("select the mathematical operation under these operations \n1.Addition type +\n2.Substraction type -\n3.Division type /\n4.Multiplication type *\n ");
scanf(" %c",&t);

 // switch statement
    switch (t) {
        case '+':
            printf("addition of %d and %d is %d", n1,n2,(n1+n2));
            break;
        case '-':
            printf("subtraction of %d and %d is %d", n1,n2,(n1-n2));
            break;
        case '/':
            printf("division of %d and %d is %d", n1,n2,(n1/n2));
            break;
        case '*':
            printf("multiplication of %d and %d is %d", n1,n2,(n1*n2));
            break;
        default:
            printf("%c is not categorized under +,-,/,* mathematical operations ", t);
            break;

        }
}
