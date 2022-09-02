#include <stdio.h>

fibonacci_series()
{ 
    int len,i,k,a=-1,b=1,c=0;

    printf("enter the length of the fibonnaci series : ");
    scanf("%d",&len);

    printf("fibonacci series is : \n");

    for(int i=0;i<len;i++){

       c=a+b;
       printf("%d\n",c);
       
       a=b;
       b=c;        

    }

}

void main ()
    {
      fibonacci_series();
    }



