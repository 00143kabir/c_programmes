#include <stdio.h>
void main () {
    int i,k,j,row,sp;
    printf("entert he number here");
    scanf("%d",&row);
    for(i=1;i<=row;i++){
        for(sp=1;sp<=row-i;sp++){
            printf(" ");

        }
        for (j=1;j<=i;j++){
            printf("%d ",j);
        }
        
        printf("\n"); 
    }
}