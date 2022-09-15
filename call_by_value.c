#include <stdio.h>
int callbyvalue(int k,int h){
    printf("value of a  is :%d and b is : %d from function before change \n",k,h);
    k=30,h=50;
    printf("value of a  is :%d and b is : %d from function\n",k,h);
    return 0;
}
void main (){
    int a=10,b=20;
    printf("value of a :%d and b :%d before calling \n",a,b);
    callbyvalue(a,b);
    printf("value of a  is :%d and b is : %d from main",a,b);
}