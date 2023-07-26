#include<stdio.h>
int main()
{
    //assigning variable
    int x,y=0;
    float avg,total=0;
    //control structure
    for(x=1;x<=10;x++)
    {
        printf("Enter the %d mark ",x);
        scanf("%d",&y);
        //process
        total=total+y;
        avg=total/10;
    }
    //output
    printf("your total mark is %.2f\n",total);
    printf("Your total average is %.2f\n",avg);
    //condition statement
    if(avg<50)
        printf("you are fail");
    else
        printf("you are pass");
}


