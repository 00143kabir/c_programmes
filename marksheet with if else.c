#include <stdio.h>
void main() {
int e,b,a,h,en;
float tot;
printf("enter the marks of all the 5 subjects");
scanf("%d%d%d%d%d",&en,&b,&a,&h,&e);

tot=e+b+a+h+en;
tot=tot/500*100;

if (tot<=90&&tot>=100){
    printf("A+ grade ");

}
else if (tot<=75&&tot>90){
    printf("A grade");

}
else if (tot>=60&&tot<75){
    printf("C grade");

}
else if (tot<60&&tot>40){
    printf("D grade");
}
else
{
printf("failed");
}

}