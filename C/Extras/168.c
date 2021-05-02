#include<stdio.h>
int main(){
    int arr[]={1,2,3,4,5,6,7,8,9};
    int *ptr1,*ptr2;
    ptr1=arr;
    ptr2=ptr1+2;
    printf("%d",ptr2-ptr1);
    printf("\n");
    int *ptr3,*ptr4;
    ptr3=arr;
    ptr4=&arr[8];
    while(ptr3<=ptr4){
        printf(" %d",*ptr3);
        ptr3++;
    }
}