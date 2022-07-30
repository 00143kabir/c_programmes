#include <stdio.h>
void main () {
    int i,k,j,num,sum=0;
    printf("enter the number ");
    scanf("%d",&num);
    for (i=1;i<=num;i++){
        sum=sum+i;
        
    }
    printf(" sum of all thge number is : 1/%d\n",sum);
}