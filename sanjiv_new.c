#include<stdio.h>

void find_length(char * a){

  int len =0;
  while(a[len]!='\0'){
    len++;
  }


    for(int i=0;i<len;i++){
    if(a[i]!=' ')
       a[i]=a[i]-32;
    printf("%c",a[i]);
    }
}


int main(){
char stringa[15]="ketan patel";
find_length(stringa);
}
