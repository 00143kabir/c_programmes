#include<stdio.h>
int main(){
    int arr[]={1,2,3,4,5,6,7,8,9,10,34,54,65,76,87,89,123,1234,12345};
    int size=sizeof(arr)/sizeof(arr[0]);
    int obj=65;
    int first=0;
    int mid=size/2;
    int last=size-1;

    while(first!=last){
        mid=(first+last)/2;
        if(obj==arr[mid]){
            printf("here : %d",mid);
            break;
        }
        else if(obj>arr[mid]){
            
            first=mid+1;
        }
        else
            
            last=mid-1;
    }
}