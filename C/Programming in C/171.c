#include<stdio.h>
void read_array(int *arr,int n);
void print_array(int *arr,int n);
void find_small(int *arr,int n,int *small,int *pos);
int main(){
    int num[10],n,small,pos;
    printf("\nEnter the size of the array: ");
    scanf("%d",&n);
    read_array(num,n);
    print_array(num,n);
    find_small(num,n,&small,&pos);
    printf("\nThe smallest number in the array is %d at position %d",small,pos);
    return 0;
}
void read_array(int *arr,int n){
    int i;
    printf("\nEnter the array elements: ");
    for(i=0;i<n;i++){
        scanf("%d",&arr[i]);
    }
}
void print_array(int *arr,int n){
    int i;
    printf("\nThe array elements are: ");
    for(i=0;i<n;i++){
        printf("\t%d",arr[i]);
    }
}
void find_small(int *arr,int n,int *small,int *pos){
    int i;
    for(i=0;i<n;i++){
        if(*(arr+i)<(*small)){
            *small=*(arr+i);
            *pos=i;
        }
    }
}