#include <stdio.h>
void main () {
    int a,b,c=1,i;
    printf("enter the base here");
    scanf("%d",&a);
    printf("enter the exponent here");
    scanf("%d",&b);
for (i=1;i<=b;i++){
    c=c*a;
}
    printf("ans is =  %d",c);
}