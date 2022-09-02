#include <stdio.h>

void getuppercase(char *str){
int len=0,i;


 printf("enter the name ");
    scanf("%[^\n]s",str);

    while(str[len]!='\0'){
        len++;
    }
    printf("length of the string is : %d\n",len);

    for(i=0;i<len;i++){
        if(str[i]!=' '){
            str[i]=str[i]-32;

        }
       
    }


}

void main () {
    char str[50];

    getuppercase(str);

    printf("%s",str);
}


