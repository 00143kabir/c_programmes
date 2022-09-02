#include <stdio.h>
void main () {
    int num,i,j,k,a,b;
    printf("enter number here");
    scanf("%d",&a);
    printf("enter the second number here");
    scanf("%d",&b);
    for(i=a;i<=b;i++){
       int fact=1;
       int sum=1;
        for(j=1;j<=i;j++){
          fact=j*fact;
        }
        printf("factorial of %d is : %d\n",i,fact);
       
        

    }
    
}