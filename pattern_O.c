#include <stdio.h>
void main ()
{
    int i,row,c;
    printf("enter the row : ");
    scanf("%d",&row);

        for(i=1;i<=row;i++){
            for(int j=1;j<=row;j++){
                    if(i==1||i==row||j==1||j==row){
            
                printf("**");
            }
            else{
                printf("  ");
            }
            }
         
            printf("\n");
        }




}

    


    
    
    
    
       
       

    


