#include<stdio.h>
int sum(int a,int b);

void main (){
    int a,b,s;
    printf("enter the value of a:");
    scanf("%d",&a);
    printf("enter the value of b:");
    scanf("%d",&b);
    s=sum(a,b);
    printf("%d",s);
}

int sum(int x,int y){
    return x+y;
}
