#include <stdio.h>
void main ()
{
    int i,row,c;
    printf("enter the row : ");
    scanf("%d",&row);

        for(i=1;i<=row;i++){
            for(int j=1;j<=row;j++){
            
                    if(j==1||j==row||i==j&&i<row/2||j==row-i&&i<row/2){
                printf("**");
            }
            else{
                printf("  ");
            }
            }
         
            printf("\n");
        }

}

