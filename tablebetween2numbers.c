#include <stdio.h>
void main () {
 int i,k,j,num,row,a,b;
 printf("enter the first number here");
 scanf("%d",&a);
 printf("enter the second number here");
 scanf("%d",&b);
 printf("tables from %d to %d \n",a,b);
 for(i=a;i<=b;i++){
    for(j=1;j<=10;j++){
        printf("%d x %d = %d\n",i,j,i*j);

    }
    printf("\n");

 }
}