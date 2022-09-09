#include <stdio.h>
void main () {
    int len,first,last,mid,obj, arr[]={1,2,3,5,7,9,6,5,11,23,45,55,56,57,58,59,74,79,88,99};
    len=sizeof(arr)/4;
    first=0;
    last=len-1;
    mid=len/2;
    obj=55;

    while(first!=last)
    {
        mid= (first+last)/2;
        if(obj==arr[mid]){
            printf("here : %d",mid);
            break;
        }
        else if (obj>arr[mid])
        {
            first = mid +1;

        }
        else{
            last = mid -1;
        }
    }

}