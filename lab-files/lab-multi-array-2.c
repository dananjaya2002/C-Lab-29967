
#include<stdio.h>
int main()
{
    //assigning variable
    int arr[4][4]={8,17,9,6,5,2,11,18,7,27,28,0,4,1,3,10};
    int x,y,z;
    //input
    printf("which number you looking for ");
    scanf("%d",&x);
    //nested loop
    for(y=0;y<4;y++)
    {
        for(z=0;z<4;z++)
        {
            if(arr[y][z]==x)
            {
                printf("arr[%d][%d]",y,z);
            }
        }
    }
}
