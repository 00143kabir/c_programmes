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
    printf("\n");

    for(i=0;i<size-1;i++){
        for(j=i+1;j<size;j++){
            if(arr[i]>arr[j])
            {
            int temp=arr[j];
            arr[j]=arr[i];
            arr[i]=temp;
            }
        }

        
    }
    printf("elements in ascending order\n");
    for(i=0;i<size;i++){
        printf("%d\t",arr[i]);
    }
    }
