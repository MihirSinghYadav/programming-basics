#include<stdio.h>
int main(){
    // int arr[5],i;
    // for(i=0;i<5;i++){
    //     *arr=0;
    //     arr++;
    // }
    // for(i=0;i<5;i++){
    //     printf(" %d",*(arr+i));
    // }
    int arr[5],i,*parr;
    parr=arr;
    for(i=0;i<5;i++){
        *parr=0;
        parr++;
    }
    for(i=0;i<5;i++){
        printf(" %d",*(arr+i));
    }
    return 0;
}