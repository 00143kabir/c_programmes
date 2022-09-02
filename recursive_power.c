#include<stdio.h>

int power(int num,int pow){
    if(pow==0)
       return 1;

    else
       return num* power(num,pow-1);            //num*num*num*1
}


int factorial(int n){

    if(n==0)
      return 1;
    else
      return n*factorial(n-1);

}


int main(){
    printf("%d",factorial(6));   
}