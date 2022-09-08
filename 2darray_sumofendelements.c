#include <stdio.h>
void main (){
int r,c,r2,arr[50][50],sum=0;
 printf("enter the rows & column of the array\n");
 scanf("%d %d",&r,&c);
if (r==c){

    
           

    printf("enter the elements of array : \n");
    for(int i=0;i<r;i++){
        for(int j=0;j<c;j++){
            scanf("%d",&arr[i][j]);
        
        }
        printf("\n");
    }


    printf("elements of array : \n");
    for(int i=0;i<r;i++){
        for(int j=0;j<c;j++){
            printf("%d\t",arr[i][j]);
        
        }
        printf("\n");
    }
 
    for(int i=0;i<r;i++){
        for(int j=0;j<c;j++){
       
       if(j==r-1)
        sum=sum+arr[i][j];
       
    }
    
        printf("\n");
    }
    printf("sum is :%d",sum);

}
    else 
    {
        printf("not a square matrix");
    }

}