#include <stdio.h>
void main () {
    int i,k,j,row;
    printf("entert he number here");
    scanf("%d",&row);
    for(i=1;i<=row;i++){
        for(j=1;j<=i;j++)
        { 
        if(j%2==0){
            printf(" * ");
        }
        else 
        {
            printf(" # ");
        }
        }
        printf("\n"); 
    }
}