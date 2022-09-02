#include <stdio.h>
void main () {
    int arr[100],i,j,k,count=0,size,temp;
    printf("enter the size of the arrey");
    scanf("%d",&size);
    printf("enter the elements : \n");
    for(i=0;i<size;i++){
         scanf("%d",&arr[i]);
    }

    printf("all elements are : \n");

    
    
    for(i=0;i<size;i++){
        printf(" at indexing  %d  is : %d\t",i,arr[i]);
        count++;
    }
    printf("\ntotal elements are :%d\n",count);

    for(i=0;i<size/2;i++){
        temp=arr[i];
        arr[i]=arr[size-1-i];
        arr[size-1-i]=temp;

    }
    printf("\nin arrey elements after reversing is : \n");
    for(i=0;i<size;i++){
        printf("%d\t",arr[i]);
    }

}