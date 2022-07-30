#include <stdio.h>
void main () {
    int first,second,third,fourth,new,num;
    printf("enter the number here");
    scanf("%d",&num);
   
   first=num%10;
   second=(num/10)%10;
   third=(num/100)%10;
   fourth=(num/1000)%10;

 new=first*1000+third*100+second*10+fourth;

   printf("%d",new);


}