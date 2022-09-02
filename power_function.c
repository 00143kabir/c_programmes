#include<stdio.h>

int power(int num,int pow){
    int n=1;
    for(int i=0;i<pow;i++){
        n=n*num;   
    }
    return n;
}

int main(){
printf("%d",power(3,4));
}