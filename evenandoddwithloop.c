#include <stdio.h>
void main() {
    int i,k,j,num;
    printf("enter number ");
    scanf("%d",&num);
    printf("even\todd");
    for(i=0;i<=num;i++)
    {
        if(i%2==0){
            printf("%d\t",i);
        }
        else{
            printf("%d\n",i);
        }
    }
}