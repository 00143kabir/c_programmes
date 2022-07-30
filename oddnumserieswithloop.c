#include<stdio.h>
void main() {
    int i ,j,k,num;
    printf("enter the number here");
    scanf("%d",&num);

    for(i=1;i<=num;i++){
        if (i%2!=0){
            printf("%d\n",i);
        }
        

    }
}