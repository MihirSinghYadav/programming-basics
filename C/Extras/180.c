#include<stdio.h>
int main(){
    int arr[2][2]={{1,2},{3,4}};
    int i,j,(*parr)[2];
    parr=arr;
    for(i=0;i<2;i++){
        for(j=0;j<2;j++){
            printf(" %d",(*(parr+i))[j]);
        }
    }
}