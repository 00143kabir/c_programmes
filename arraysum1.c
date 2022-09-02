#include <stdio.h>
void main () {
    int i,j,k,size,r,c,arr[50][50],sum=0,arr1[20][20];
    printf("enter rows");
    scanf("%d",&r);
     printf("enter column");
    scanf("%d",&c);
    printf("enter elements : ");
    for(i=0;i<r;i++){
        for(j=0;j<c;j++){
            scanf("%d",&arr[i][j]);
 }
    }
    for(i=0;i<r;i++){
        for(j=0;j<c;j++){
            printf("%d\t",arr[i][j]);
       
            

        }
        printf("\n");
    }

    printf("sum of all the elements is : %d",sum);
}