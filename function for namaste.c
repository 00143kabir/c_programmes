#include<stdio.h>
void nam();
void bon();

int main(){
    char ch;
    printf("enter the character here");
    scanf("%c",&ch);
    if (ch=='i'||ch=='I')
    {
      nam();
    }
    else
    {
    bon();
    }
    
    return 0;


}

void nam(){
    printf("namaste ");
}

void bon(){
    printf("bonjour ");
}