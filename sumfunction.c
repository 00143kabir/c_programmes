#include<stdio.h>
int sum(int s,int d);

void main() {
    int a,b;
    printf("enter the a here");
    scanf("%d",&a);
    printf("enter the b here");
    scanf("%d",&b);
    int s = sum(a,b);
    printf("%d",s);

}

int sum(int a,int b){
    return a+b;

}