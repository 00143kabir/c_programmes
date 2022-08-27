#include <stdio.h>
void main () {
    int i,j,k,sp,row;
    printf("enter the number here");
    scanf("%d",&row);
    for(i=1;i<=row;i++){
        for(sp=1;sp<=row-i;sp++){
            printf(" ");
        }
        for(j=1;j<=i;j++){
            if(j==1||i==j||i==row){
                 printf("%c",64+j);
            }
            
            printf("  ");

        }
        printf("\n");
    }
}
 