#include<stdio.h>
int main(){
    int i=2;
    {
        int i=4,j=5;
        printf("%d%d",i,j);
    }
    printf("%d%d",i,j);
    return 0;
    
}