#include <stdio.h>
void main () {
    int i,k,sp,j,row;
    printf("enter the number here");
    scanf("%d",&row);
    for(i=1;i<=row;i++){
        for(sp=1;sp<=i;sp++){
            printf("  ");

        }
        for(j=1;j<=row-i*2-1;j++) {
           printf("* ");

            }
                printf("\n");
  
        }

         
    }

