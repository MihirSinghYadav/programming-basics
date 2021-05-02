#include<stdio.h>
#include<stdlib.h>
int main(){
    int **arr,i,j,ROWS,COLUMNS;
    printf("\nEnter the number of rows and columns: ");
    scanf("%d %d",&ROWS,&COLUMNS);
    arr=(int **)malloc(ROWS*sizeof(int *));
    if(arr==NULL){
        printf("\nMemory could not be allocated");
        exit(-1);
    }
    for(i=0;i<ROWS;i++){
        arr[i]=(int *)malloc(COLUMNS*sizeof(int));
        if(arr[i]==NULL){
            printf("\nMemory Allocation failed");
            exit(-1);
        }
    }
    for(i=0;i<ROWS;i++){
        for(j=0;j<COLUMNS;j++){
            scanf("%d",&arr[i][j]);
        }
    }
    for(i=0;i<ROWS;i++){
        printf("\n");
        for(j=0;j<COLUMNS;j++){
            printf("%d ",arr[i][j]);
        }
    }
    for(i=0;i<ROWS;i++)
    free(arr[i]);
    free(arr);
    return 0;
}