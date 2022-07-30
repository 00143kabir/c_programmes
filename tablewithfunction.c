#include<stdio.h>
void table(int k);

int main(){
    int n;
    printf("enter the number here");
    scanf("%d",&n);
    table(n);


}

void table(int n) {
    for (int k=1;k<=10;k++){
        printf("%d * %d = %d\n",n,k,n*k);
    }
}