#include <stdio.h>

void main(){
int len=0,i;
char temp,str[50];

 printf("enter the name ");
    scanf("%[^\n]s",&str);

    while(str[len]!='\0'){
        len++;

    }
    printf("length of the string is : %d\n",len);

    for(i=0;i<len/2;i++){
        temp=str[i];
        str[i]=str[len-1-i];
        str[len-1-i]=temp;

 
       
    }
     printf("string in reverse %s",str);


}


