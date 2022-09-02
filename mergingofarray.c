#include <stdio.h>
void main () {

int i,k,size2,size1,j,arr1[3],arr2[3];
printf("%d\n",sizeof(arr1));

printf("enter the size of array 1\n");
scanf("%d",&size1);

printf("enter the elements of array 1\n");

for(i=0;i<size1;i++){
    scanf("%d",&arr1[i]);

}

printf("enter the size of array 2\n");
scanf("%d",&size2);

printf("enter the elements of array 2\n");
for(i=0;i<size2;i++){
    scanf("%d",&arr2[i]);
}

for(i=0;i<size2;i++){
    arr1[size1]=arr2[i];
    size1++;   

}
printf("array 1 elements are now:\n");
for(i=0;i<size1;i++){
printf("%d\t",arr1[i]);

}

printf("\n%d\n",sizeof(arr1[4]));
}