#include <stdio.h>
void main () {
    int i,k,sp,j,row;
    printf("enter the number here");
    scanf("%d",&row);
    for(i=1;i<=row;i++){
        for(sp=1;sp<=i;sp++){
            printf(" ");

        }
        for(j=1;j<=row-i;j++) {
            if(j==1||i==1||j==row-i){
          
                printf("* ");
            }
            else 
            {
                printf("  ");
            }

            }
                printf("\n");
  
        }

         
    }

