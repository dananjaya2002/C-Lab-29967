#include<stdio.h>

int main()
{
//assigning variables
    float rad,dim,cir,area,pi= 3.14159;

//getting inputs
    printf("enter the radius of the circle? ");
    scanf("%f",&rad);


//getting output
    printf("Diameter of the circle is %f \n",2*rad);
    printf("Circumference of the circle is %f \n",2*pi*rad);
    printf("Area of the circle is %f \n",pi*rad*rad);
}
