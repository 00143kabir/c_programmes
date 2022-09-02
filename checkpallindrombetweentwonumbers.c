#include <stdio.h>
void main () {
    int i,num,a,b,temp;
    printf("enter the first number here");
    scanf("%d",&a);
    printf("enter the second number here");
    scanf("%d",&b);
    for(i=a;i<=b;i++){
        num=i;
        temp=i;
       int rem,rev=0;
    while(num>0){
        rem=num%10;
        rev=rev*10+rem;
    
        num=num/10;


    }
    if(rev==i){
        printf("rev of %d = : %d it is a pallindrom",i,rev);

    }
    
           printf("\n");


    }

}