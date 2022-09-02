#include <stdio.h>
struct ketan {
    int roll;
    float per;
    char name[50];

};

void getvalue(struct ketan *str){
    
    printf("enter the value of roll no.");
    scanf("%d",&str->roll);
      printf("enter the value of percentage.");
    scanf("%f",&str->per);
    getchar();
      printf("enter the name");
    scanf("%[^\n]s",&str->name);

}


void main () {
    int m;
    struct ketan s;
    getvalue(&s);
    printf("roll = %d\n",s.roll);
    printf("percentage %.0f\n",s.per);
    printf("name = %s\n",s.name);

    


}