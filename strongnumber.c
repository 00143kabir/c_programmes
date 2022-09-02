#include <stdio.h>
void main() {
    int i,j,k,num,str=0,rem,fact,temp;
    printf("enter number here");
    scanf("%d",&num);
    temp=num;
    while(num>0){
        rem=num%10;
        fact=1;
        for(i=1;i<=rem;i++){
            fact=i*fact;
           
        }
        str=str+fact;
        num=num/10;
    }
    if(temp==str){
        printf("%d : is a strong number",str);
        
    }
    else {
        printf("%d : not a strong number",str);
    }
}