#include <stdio.h>
void main () {
 int i,k,j,row,a,b;
 printf("enter the first number here");
 scanf("%d",&a);
 printf("enter the second number here");
 scanf("%d",&b);
 

    for(i=a;i<=b;i++){
         int num=0;
        //printf("factors of %d : ",i);
        for(j=1;j<=(i/2);j++){

            if(i%j==0){
                num=num+j;
                //printf("%d\t",j);
            }

        }

        if(num==i){
            printf("%d is a perfect number\n",i);
        }
        //printf("\n");    

    }
} 
