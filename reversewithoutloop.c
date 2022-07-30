#include <stdio.h>
void main () {
    int i,j,k=1,num,middle,last,first,rev;
    printf("enter the numebr here");
    scanf("%d",&num);

last=num%10;
middle=(num/10)%10;
first=(num/100)%10;
rev=last*100+middle*10+first;

printf("%d",rev);

}