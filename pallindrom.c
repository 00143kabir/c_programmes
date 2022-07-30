#include <stdio.h>
void main () {
    long i,j,k,rev=0,num,rem,a;
    
    printf("enter the number here");
    scanf("%d",&num);
     a=num;
    while(num>0) {
        rem=num%10;
         rev=(rev*10)+rem;


        num=num/10;
     } 
     printf("reverse number is : %d",rem);
      if (a==rev){
         printf("the input number is pallindrom");
     }}