//programme to find out digit is positive or negative//



#include<stdio.h>
void main() {
    int num;
    printf("enter the number here");
    scanf("%d",&num);
    printf("%d",num);
    if (num>=0)
    {
        if (num<=9)
        printf("one digit poritive number");
        else 
        printf("two digit positive number");

    }
    else
    {
        if (num>=-10&&num<-1)
        printf("one digit negative number");
        else 
        printf("two digit negative number");
    }
}