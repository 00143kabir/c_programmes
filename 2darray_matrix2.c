#include <stdio.h>
void main (){
int r,c,r2,arr2[2][2],sum=0;
 //printf("enter the rows & column of the array\n");
 //scanf("%d %d",&r,&c);
r=4;
c=4;
int arr[4][4] = {{1,2,3,4},{3,4,5,6},{4,5,6,7},{6,8,9,6}};

if (r==c){

    
           

    // printf("enter the elements of array : \n");
    // for(int i=0;i<r;i++){
    //     for(int j=0;j<c;j++){
    //         scanf("%d",&arr[i][j]);
        
    //     }
    //     printf("\n");
    // }


    printf("elements of array : \n");
    for(int i=0;i<r;i++){
        for(int j=0;j<c;j++){
            printf("%d\t",arr[i][j]);
        
        }
        printf("\n");
    }
     int temp=arr[0][0];
    for(int i=0;i<r;i++){
        for(int j=0;j<c;j++){
       
       
      if(i==0||i==r-1){
        printf("%d\t",arr[i][j]);
        
       
      }
       
    }
     
        printf("\n");
    }
       


}
    else 
    {
        printf("not a square matrix");
    }

}