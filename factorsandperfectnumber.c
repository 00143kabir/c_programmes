#include <stdio.h>
void main () {
    int a,b,i,sum=0;
    printf("enter the number here");
    scanf("%d",&a);
    for (i=1;i<=a/2;i++){
        if (a%i==0){
            printf("%d\n",i);
            sum=sum+i;

        }
    }
    if (sum==a){
        printf("%d is a perfect number",a);
    }
    else
    {
        printf("not a perfect number");
    }
}