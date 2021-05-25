#include<stdio.h>
typedef struct{
    int x;
    int y;
}POINT;
void display(int,int);

int main(){
    POINT p1={2,3};
    display(p1.x,p1.y);
    return 0;
}
void display(int a,int b){
    printf("\nThe coordinates of the point are: (%d,%d)",a,b);
}