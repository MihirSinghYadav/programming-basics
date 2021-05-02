#include<stdio.h>
int main(){
    int i,j,k;
    int arr[2][2][2];
    int (*parr)[2][2]=arr;
    printf("\nEnter the elements of a 2 x 2 x 2 array: ");
    for(i=0;i<2;i++){
        for(j=0;j<2;j++){
            for(k=0;k<2;k++){
                scanf("%d",&arr[i][j][k]);
            }
        }
    }
    printf("\nThe elements of the 2x2x2 array are: ");
    for(i=0;i<2;i++){
        for(j=0;j<2;j++){
            for(k=0;k<2;k++){
                printf("%d ",*(*(*(parr+i)+j)+k));
            }
        }
    }
    return 0;
}