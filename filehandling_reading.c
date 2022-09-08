#include <stdio.h>

void main (){
    FILE *ptr;
    ptr=fopen("prog1.txt","r");
    char ch[100];
    fscanf(ptr,"%[^\n]s",&ch);
    printf("%s",ch);
    
    fclose(ptr);
}