#include <stdio.h>
void main () {
    int i,k,j,row;
    printf("entert he number here");
    scanf("%d",&row);
    for(i=1;i<=row;i++){
        for(j=1;j<=i;j++)
        {
            if(j==1||i==j||i==row){
            printf("%c",64+j);
        }
        else{
            printf(" ");
        }

        }
                printf("\n");
        
    }}
    

