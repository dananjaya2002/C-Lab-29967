
#include<stdio.h>
int main()
{
    //assigning variable
    int n1[3][3]={3,1,4,2,4,3,4,6,2};
    int n2[3][3]={2,4,5,6,3,1,3,2,7};
    int s[3][3],x,y;

    //input
    for(x=0;x<3;x++){
        for(y=0;y<3;y++){
            printf("%d ",n1[x][y]);

        }
        printf("\t");

        for(y=0;y<3;y++){
            printf("%d ",n2[x][y]);
        }
        printf("\t");

    //output

        for(y=0;y<3;y++){
                s[x][y]=n1[x][y]+n2[x][y];
                printf("%d ",s[x][y]);
        }
        printf("\n");
    }
}
