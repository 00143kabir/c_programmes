#include <stdio.h>
int size,i;
void array_in_reverse(int *arr) {
    int temp=0;
    for(i=0;i<size/2;i++){
        temp=arr[i];
        arr[i]=arr[size-1-i];
        arr[size-1-i]=temp;
        
    }
    
    printf("array on reverse is :\n");
    for(i=0;i<size;i++){
        printf("%d\t",arr[i]);
     }
}
void getvalues(int *ptr) {
    
    printf("enter the size of array \n");
    scanf("%d",&size);
    printf("enter the elements");
    for(i=0;i<size;i++){
    scanf("%d",(ptr+i));
    }

}
void main (){
    int arr[100];
    getvalues(arr);
    
    for(int i =0;i<size;i++){
       printf("%d\t",arr[i]); 
    }
    
    array_in_reverse(arr);

}