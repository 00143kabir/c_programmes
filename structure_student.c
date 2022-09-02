#include <stdio.h>
struct student  
{
    char name[50];
    int roll;
    float per;

};  
void main () {
   struct student k[50];
    
    int i,num;
    printf("enter the size: \n");
    scanf("%d",&num);

    for(int i=0;i<num;i++)
    {
        getchar();
        printf("enter %d student details\n",i+1);

        printf("enter name : \n");
        scanf("%[^\n]s",&k[i].name);

        printf("enter per : \n");
        scanf("%f",&k[i].per);

        printf("enter roll number  :\n ");
        scanf("%d",&k[i].roll);

    }


    printf("\n_________student details______\n");

    for(int i=0;i<num;i++){
        printf("%s\t%2.f\t%d\n",k[i].name,k[i].per,k[i].roll);
    }
    printf("\n");


}
