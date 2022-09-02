#include<stdio.h>
void main () {
    int i,k,j,size,arr[100],search,found=0;
    printf("enter the size " );
    scanf("%d",&size);
    printf("Enter the elements");
    for(i=0;i<size;i++){
        scanf("%d",&arr[i]);

    }
    printf("elements are : \n");

    for(i=0;i<size;i++){
        printf("%d\t",arr[i]);
        
    }
    printf("which one you would like to search");
    scanf("%d",&search);
    for(i=0;i<size;i++){
        if(search==arr[i]){

         found=1;
         break;
      
        }}
        if(found==1){
            printf("element is available");

        }
        else {
            printf("not available");
        }
    }
