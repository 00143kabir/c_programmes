#include <stdio.h>
void main () {
    int i,a,b,num,c;
    a=-1;
    b=1;
    for (i=1;i<10;i++){
        c=a+b;
        printf("%d\t",c);
        
      a=b;
      b=c;

    }
}