#include<stdio.h>
void table(int t);

void main() {
    int num;
    printf("enter the a here");
    scanf("%d",&num);
    table(num);
   

}

void table(int num){
 
   int i;
    for ( i=1;i<=10;i++){
    printf("%d x %d = %d\n",num,i,num*i);
    }


}