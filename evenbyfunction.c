#include <stdio.h>
void eve() {
    int i,a,b;
    printf("Enter the first number here");
    scanf("%d",&a);
    printf("Enter the second number here");
    scanf("%d",&b);

    for(i=a;i<=b;i++){
        if(i%2==0){
        printf("%d\t",i);
    }
    }

}
void main () {
    eve();
}