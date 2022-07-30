#include<stdio.h>
void main () 
{
    int thousand,fivehundred,hundred,twothousand, bal;
    int key;
    printf("enter the amount");
    scanf("%d",&bal);
    printf("enter the note you wanna know\n");
    printf("press 1 for hundred\n");
    printf("press 2 for 500\n");
    printf("press 3 for thousand\n");
    printf("press 4 for twothousand\n");
    scanf("%d",&key);
    switch(key)
{
    case 1:
    
    hundred=bal/100;
    printf("%d",hundred);
    break;
    case 2:
    fivehundred=bal/500;
    printf("%d",fivehundred);
    break;
    case 3:
    thousand=bal/1000;
    printf("%d",thousand);
    break;
    case 4:
    twothousand=bal/2000;
    printf("%d",twothousand);
    break;
    default :
    break;
}
    
}