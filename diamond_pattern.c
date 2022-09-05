#include <stdio.h>
void main ()
{
    int i,row,c;
    printf("enter the row : ");
    scanf("%d",&row);

    for(i=1;i<=row;i++){
        for(int j=1;j<=row-i;j++){
          printf("   ");
        }
        for(int k=1;k<=i;k++){
            printf(" *    ");
        }
        printf("\n");
    }
        
    //     printf("\n");   //line change of the diamond
    
    for(int i=1;i<=row;i++){
        for(int j=1;j<=i;j++){
          printf("   ");
        }
        for(int k=1;k<=row-i;k++){
            printf(" *    ");
        }
        printf("\n");
        }
    }
    

    
    
    
    
       
       

    


