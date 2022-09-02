#include <stdio.h>
void main () {
    int arr[50],k,i,j,size,sum=0,count=0,count1=0,rem,rev;
    printf("enter the size of arrey ");
    scanf("%d",&size);

    printf("enter the elements of arrey");
    for(i=0;i<size;i++){
        scanf("%d",&arr[i]);
        

    }
    printf("elements are ---->\n");

    for(i=0;i<size;i++){
    while (arr[i]>0){
    rem=arr[i]%10;
    rev=rev*10+rem;
    arr[i]=arr[i]/10;
    }

    }
         printf(" elements in reverse are   : %d\t",rev);
    
       
   



}