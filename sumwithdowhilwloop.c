#include <stdio.h>
void main() {
    int i,k,j,num,sum=0;
    char ch;
    
    do{
        
    printf("enter the number here");
    scanf("%d",&num);
    getchar();
    sum=sum+num;

    printf("if you want to continue then press y/Y");
    scanf("%c",&ch);

    }while( ch=='y'|| ch=='Y');

    printf("sum is : %d",sum);
}