#include <stdio.h>
void fab(int x) {
    int i,a=-1,b=1,fab=0,arr[50];
    printf("Enter the number");
    scanf("%d",&x);
 
    for(i=0;i<=x;i++){
        
    fab=a+b;

    printf("%d\t",fab);
    arr[i]=fab;
    a=b;
    b=fab;

    }
  

   
    }


void main () {
    int x;
    fab(x);



}