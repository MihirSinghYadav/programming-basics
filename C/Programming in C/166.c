#include<stdio.h>
int main(){
    int arr[]={1,2,3,4,5};
    printf("\nAddress of the array = %p %p %p",arr,&arr[0],&arr);
    printf("\n%p %p %p",&arr[1],&arr[2],&arr[3]);
    int *ptr = &arr[0];
    ptr++;
    printf("\n%d",*ptr);
}