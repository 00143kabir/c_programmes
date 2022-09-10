#include <stdio.h>
void main ()
{
    int i,row,c;
    printf("enter the row : ");
    scanf("%d",&row);

        for(i=1;i<=row;i++){
            for(int j=1;j<=row;j++){
            
                    if(j==1||i==1||i==row||j==row&&i!=6||i==7&&j!=2){
                printf("**");
            }
            else{
                printf("  ");
            }
            }
         
            printf("\n");
        }

}

