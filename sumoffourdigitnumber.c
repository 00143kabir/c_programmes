#include <stdio.h>
void main () {
    int i,j,k=1,num,sum,middle,last,first,rev,third,second,fourth;
    printf("enter the numebr here");
    scanf("%d",&num);

first=num%10;
second=(num/10)%10;
third=(num/100)%10;
fourth=(num/1000)%10;
sum=first+second+third+fourth;


printf("sum of all the four digit number is : %d",sum);

}