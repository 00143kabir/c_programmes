#include <stdio.h>


void add() {
    int a,b,i,j;
    printf("enter the first number");
    scanf("%d",&a);
    printf("enter the second number");
    scanf("%d",&b);
    printf("even \t odd\n");
    for(i=a;i<=b;i++){
        if(i%2==0){
            printf("%d\t",i);

        }
        else 
        {
            printf("\t%d\n",i);
        }

    }

}