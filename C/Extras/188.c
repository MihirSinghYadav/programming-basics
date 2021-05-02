#include<stdio.h>
#include<stdlib.h>
int main(){
    int i,n;
    int *arr;
    printf("\nEnter the number of elements: ");
    scanf("\n%d",&n);
    arr=(int*)malloc(n*sizeof(int));
    if(arr==NULL){
        printf("\nMemory allocation failed");
    }
    for(i=0;i<n;i++){
        printf("\nEnter the value %d of the array",i);
        scanf("%d",&arr[i]);
    }
    printf("\nThe array contains \n");
    for(i=0;i<n;i++){
        printf("%d ",arr[i]);
        }
        return 0;
}