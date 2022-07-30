#include <stdio.h>
void main () {

    int i,j,k,num,rem;
    printf("enter the number here");
    scanf("%d",&num);
    while(num>0){
        rem=num%10;

        printf("%d",rem);
        num=num/10;
    }
}