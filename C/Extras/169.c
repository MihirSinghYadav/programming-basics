#include<stdio.h>
int main(){
    int i,n;
    int arr[10],*parr=arr;
    printf("\nEnter the number of elements: ");
    scanf("%d",&n);
    printf("\nEnter the elements: ");
    for(i=0;i<n;i++){
        scanf("%d",parr+i);
    }
    printf("\nThe entered elements are: ");
    for(i=0;i<n;i++){
        printf("\t %d",*(parr+i));
    }
    return 0;
}