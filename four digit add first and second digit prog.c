#include <stdio.h>
void main() {
int num;
int a,b,c;
printf("enter the four digit number");
scanf("%d",&num);
if (num>=1000&&num<9999){
 a = num%10;
 b = num/1000;
printf("sum of %d + %d is = %d",a,b,a+b);




}

else 
{
printf("enter four digit number");
}
}