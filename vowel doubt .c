#include<stdio.h>
void main() {
  char ch;
    
 
    getchar();
    printf("enter the key");
    scanf("%c\n",&ch);
    switch(ch) {
        case 'a':printf("vowel");
                break;
        case 'e':printf("vowel");
                break;
        case 'i':printf("vowel");
                break;
        case 'o':printf("vowel");
                break;
        case 'u':printf("vowel");
                break;
        
        default:
           printf("not a vowel");
           break;
}
}