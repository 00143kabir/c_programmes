#include <stdio.h>
#include <math.h>

int power(int num,int pow){
    int n=1;
    for(int i=0;i<pow;i++){
        n=n*num;   
    }
    return n;
}
void main () {
    int i,j,temp,temp1,num,count=0,arm=0,rem=0;
    printf("enter number ");
    scanf("%d",&num);
    temp=num;
    temp1=num;

    while(num>0){
        num=num/10;
        count++;
    }
    printf(" count : %d\n",count);
    while(temp>0){
        rem=temp%10;
        int powr =pow(rem,count);
        arm=arm+powr;
        temp=temp/10;
        printf("arm = %d   power = %d\n",arm,powr);
       
    }
    //printf("number is :  : %d\n",arm);

    if(temp1==arm){
        //printf(" %d : no. is armstrong ",arm);

    }
    else{
        //printf("%d : no. is not a armstrong number ",arm);
    }


}