#include<stdio.h>

int check_prime_number(int num){
    int flag=0;
    for(int i =2;i<=num/2;i++){
        if(num%i==0){
            flag=1;
            printf("no");
            break;
        }

    }
    if(flag==0)
      printf("yes");    
}

int main(){
    check_prime_number(997);    
}