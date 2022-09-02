#include <stdio.h>

void main(){
int len=0,i;
char str[50];

 printf("enter the name ");
    scanf("%[^\n]s",&str);

    while(str[len]!='\0'){
        len++;

    }
    printf("length of the string is : %d\n",len);

    for(i=0;i<len;i++){
        if(str[i]>=97 && str[i]<122){
            str[i]=str[i]-32;

        }
        else if (str[i]>=65 && str[i]<90){
            str[i]=str[i]+32;

        }
          else 
          {
            str[i]= '*';

        }

       
    }
     printf("%s",str);


}


