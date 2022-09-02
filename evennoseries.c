#include <stdio.h>
void main () {
 int i,k,j,num,row,a,b;
 printf("enter the first number here");
 scanf("%d",&a);
 printf("enter the second number here");
 scanf("%d",&b);
 for(i=a;i<=b;i++){
    if(i%2==0)
    printf("%d\n",i);

 }
}