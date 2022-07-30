#include <stdio.h>
#include <math.h>
void main () {
    int i,count=0,num1,temp,sum=0,rem;
    int num;
    printf("enter the number here");
    scanf("%d",&num);
    temp=num;
    num1=num;
    while(num>0){
        count++;

        num=num/10;
    }
    printf("%d\n",count);
    while(temp>0){
        rem=temp%10;

        sum=sum+pow(rem,count);
        temp=temp/10;

    }
    if (num1==sum){
        printf("\n%d: is armstrong number ",sum);
    }
    else{
    printf("%d: is not armstrong number  ",sum);
    }

}