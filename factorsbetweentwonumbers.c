#include <stdio.h>
void main () {
 int i,k,j,num,row,a,b;
 printf("enter the first number here");
 scanf("%d",&a);
 printf("enter the second number here");
 scanf("%d",&b);
 

    for(i=a;i<=b;i++){
        printf("factors of %d : ",i);
        for(j=a;j<=b/2;j++){
       
            if(i%j==0){
            
                printf("%d\t",j);
            }
        }
        printf("\n");
    
    
    }
} 
