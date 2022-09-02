#include <stdio.h>
void main () {
    float price[5];
    printf("enter the price");
    scanf("%f",&price[0]);
    scanf("%f",&price[1]);
    scanf("%f",&price[2]);
    scanf("%f",&price[3]);
printf("price of [0] : %f",price[0]+(0.18*price[0]));
printf("price of [1] : %f",price[1]+(0.18*price[1]));
printf("price of [2] : %f",price[2]+(0.18*price[2]));
printf("price of [3] : %f",price[3]+(0.18*price[3]));
 
}