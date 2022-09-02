#include <stdio.h>
void main () {
    char str[50] ;
    int len=0,count=0;


    printf("enter the string ");
    scanf("%[^\n]s",&str);

    while(str[len]!='\0'){
        if(str[len]==' '){
            count++;
        }
        len++;
    }
    printf("total spaces are :%d\n",count);
    printf("total length :%d\n",len);
    printf("total length after - spaces  :%d",len-count);
}