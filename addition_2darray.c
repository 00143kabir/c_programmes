#include <stdio.h>
void main (){
int r,c,r2,arr1[50][50],arr2[50][50],arr3[50][50];\
 printf("enter the rows & column of the array\n");
 scanf("%d %d",&r,&c);
if (r==c){

    
           

            printf("enter the elements of array 1 : \n");
            for(int i=0;i<r;i++){
                for(int j=0;j<c;j++){
                    scanf("%d",&arr1[i][j]);
                
                }
                printf("\n");
            }


                                        printf("enter the elements of array 2 : \n");
                                        for(int i=0;i<r;i++){
                                            for(int j=0;j<c;j++){
                                                scanf("%d",&arr2[i][j]);
                                            
                                            }
                                            printf("\n");
                                        }

    for(int i=0;i<r;i++){
        for(int j=0;j<c;j++){

        arr3[i][j]=arr1[i][j]+arr2[i][j]; 
        printf("%d\t",arr3[i][j]);  
        }
        printf("\n");
    }


}
    else 
    {
        printf("not a square matrix");
    }

}