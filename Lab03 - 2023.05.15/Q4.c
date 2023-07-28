#include<stdio.h>

int main() {
//assigning variables
    float c;
    int f;
//getting input
        printf("what is the temperature in degree fahrenheit? ");
        scanf("%d",&f);
//process
    c=(5.0/9.0)*(f-32.0);
//output
        printf("temperature reading in degree celsius is %.2f celsius",c);
}
