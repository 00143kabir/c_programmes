#include<stdio.h>
void main() {
    int day;
    printf("press 1 for monday\n");
    printf("press 2 for tuesday\n");
    printf("press 3 for wednessday\n");
    printf("press 4 for thursday\n");
    printf("press 5 for friday\n");
    printf("press 6 for saturday\n");
    printf("press 7 for sunday\n");
    printf("enter the key\n");
    scanf("%d\n",&day);
    switch(day) {
        case 1:printf("thursday");
                break;
        case 2:printf("monday");
                break;
        case 3:printf("tuesday");
                break;
        case 4:printf("wednessday");
                break;
        case 5:printf("thursday");
                break;
        case 6:printf("friday");
                break;
        case 7:printf("saturday");
                break;
        default:
           printf("invalid char");
           break;7
}
}