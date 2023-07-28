#include<stdio.h>

int main()
{
//assigning variables
    float bs,ns;
    char enam[20];
//getting inputs
    printf("enter the employee name? ");
    scanf("%s",&enam);
    printf("Enter the employee's basic salary? ");
    scanf("%.2f",&bs);
//condition statement
    if(bs<5000.0){
            ns=(105.0/100.0)*bs;
    }

    else if(bs>5000.0&&bs<10000.0)
            ns=(110.0/100.0)*bs;

    else
            ns=(115.0/100.0)*bs;

//getting output
    printf("Employee %s's new salary is %.2f",enam,ns);

}

