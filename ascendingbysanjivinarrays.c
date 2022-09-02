#include <stdio.h>

void ascending(int *ptr){
    int temp =0;
    for(int i=0;i<6;i++){
        for(int j=0;j<5;j++){
       // printf("%d when i =%d and j = %d \n",ptr[j],i,j);
            if (ptr[j]>ptr[j+1]){
               temp = ptr[j];
               ptr[j]=ptr[j+1];
               ptr[j+1]=temp;
            }
        }
             
    }
}

void main (){
    int arr[]={4,5,9,7,89,6};
    ascending(arr);
    
    for(int i=0;i<6;i++){
    printf("%d \t",arr[i]);
    }
}