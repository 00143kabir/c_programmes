#include <stdio.h>
void main () {
    int i,j,k,sp,row;
    printf("enter the number here");
    scanf("%d",&row);
    for(i=row;i>=1;i--){
        for(j=1;j<=i;j++){
            if(j==1||j==i||i==row){
              printf("*");
            }
            else{
            printf(" ");
        }}
        printf("\n");
    }
}