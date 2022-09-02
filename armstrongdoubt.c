#include <stdio.h>
#include <math.h>

void main () {
    int i,k,j,num,rem,count=0,temp,temp1,sum=0;
    printf("enter number here");
    scanf("%d",&num);
    temp=num;
    temp1=num;
  while(num>0){
    count++;
    num=num/10;

  }
  printf(" count  is : %d\n",count);
  while(temp>0){
    rem=temp%10;
    sum=sum+pow(rem,count);
    temp=temp/10;

  }
  if(sum==temp1){
  printf("no.%d is aarmstrong",sum);
  }
  else
  { 
  printf("no %d is not a armstrong",sum);
  }
  }