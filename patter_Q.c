#include <stdio.h>
void main ()
{
    int i,row,c;
    printf("enter the row : ");
    scanf("%d",&row);

        for(i=1;i<=row;i++){
            for(int j=1;j<=row;j++){
            
                    if(j==1&&i<7||j==row&&i<7||i==7||i==1||i==j&&i>5){
                printf("**");
            }
            else{
                printf("  ");
            }
            }
         
            printf("\n");
        }

}

