#include <stdio.h>
void main () {
    int i,k,j;
    char ch;
    

    printf("enter any char ") ;
    scanf("%s",&ch);
    if('a','e','i','o'!=ch){
        printf("consonent");

    }
    else{
        printf("vowel");
    }
}