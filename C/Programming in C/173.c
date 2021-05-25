#include<stdio.h>
int main(){
    int arr[]={1,2,3,4,5};
    int *ptr;
    ptr=arr;
    printf("\nSize of array = %d",sizeof(arr));
    printf("\nSize of pointer variable is = %d",sizeof(ptr));
    return 0;
}