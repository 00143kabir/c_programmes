#include <stdio.h>
void main () {
    int arr[50],k,i,j,size,sum=0;
    printf("enter the size of arrey ");
    scanf("%d",&size);

    printf("enter the elements of arrey");
    for(i=0;i<size;i++){
        scanf("%d",&arr[i]);
        

    }
    printf("elements are ---->\n");

    for(i=0;i<size;i++){
        printf("%d\t",arr[i]);
     sum=sum+arr[i];


    }
    printf("\n sum of all the elements is : %d",sum);



}