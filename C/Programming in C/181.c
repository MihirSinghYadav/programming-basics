#include<stdio.h>
int main(){
    int i,j,mat[3][3];
    printf("\nEntere the elements of the matrix:");
    printf("\n**********************************");
    for(i=0;i<3;i++){
        for(j=0;j<3;j++){
            printf("\nMat[%d][%d]=",i,j);
            scanf("%d",&mat[i][j]);
        }
    }
    printf("\nElements of the matrix are: ");
    printf("\n***************************");
    for(i=0;i<3;i++){
        printf("\n");
        for(j=0;j<3;j++){
            printf("\nMat[%d][%d]=%d",i,j,*(*(mat+i)+j));
        }
    }
    return 0;
}