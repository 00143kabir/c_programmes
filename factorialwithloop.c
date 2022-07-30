#include <stdio.h>
void main () {
  int num,i,k,fact=1;
  printf("enter the number here");
  scanf("%d",&num);
  for (i=1;i<=num;i++){
  fact = fact*i;
  }
  
printf("%d\n",fact);
}