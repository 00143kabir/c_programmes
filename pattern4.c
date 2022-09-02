#include<stdio.h>
void main () {
    int i,k,count,rows,j;
    

    printf("enter number");
    scanf("%d",&rows);
   

    for(i=1;i<=rows;i++){
        for(j=1;j<=i;j++)
        {
          
            printf("%c",96+j);

        }
        printf("\n");
    }
}