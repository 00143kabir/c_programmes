#include <stdio.h>
int factorial() {
    int i,a,b,fact=1;
    printf("Enter the number");
    scanf("%d",&b);
 
    for(i=1;i<=b;i++){
    fact=fact*i;
    }
    return fact;
    }


void main () {
    int fact;

    fact=factorial();
    printf("%d",fact);
}