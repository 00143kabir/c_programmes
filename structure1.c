#include <stdio.h>
struct ketan {
    int roll;
    float per;
    char name[50];

};
void main () {
    struct ketan s = {101,78.87,"ketan shrivastava"};
    printf("roll no is : %d\n",s.roll);
    printf("name  is : %s\n",s.name);
    printf("percentage  is : %d\n",s.per);

}