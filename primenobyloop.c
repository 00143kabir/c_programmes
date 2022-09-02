#include <stdio.h>
void main () {
    int i,j,k,num,row;
    printf("enter number");
    scanf("%d",&num);
    for(i=2;i<=num/2;i++){
        if (num%i==0){
            break;
        }
    }
    if (i>num/2&&num>1){
        printf("number is prime ");
    }
        else 
        {
            printf("no. is not prime");
        }
    }
