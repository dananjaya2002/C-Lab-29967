#include<stdio.h>

int main()
{
//assigning variables
    float bs,rem1,rem2;
    char city;
//getting inputs
    printf("Enter the city you are currently working:- ");
    scanf("%c",&city);
    printf("Enter your Basic salary:- ");
    scanf("%f",&bs);

//condition statement 1
    if(bs<=25000.0)
        rem1=(110.0/100.0)*bs;
    else if(bs>25000.0&&bs<50000.0)
        rem1=(120.0/100.0)*bs;
    else
        rem1=(150.0/100.0)*bs;
//condition statement 2
    if (city =='C')
        rem2=rem1+2500.0;
    else
        rem2=rem1;
//getting output
    printf("The gross remuneration is %.2f ",rem2);
}

