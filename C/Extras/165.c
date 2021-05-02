#include<stdio.h>
void read(float *b,float *h);
void calculate_area(float *b,float *h,float *a);
int main(){
    float base ,height,area;
    read(&base,&height);
    calculate_area(&base,&height,&area);
    printf("\nArea of the triangle with base %.1lf and height %.1lf = %.2f",base , height,area);
    return 0;
}
void read(float *b,float *h){
    printf("\nEnter the base of the triangle: ");
    scanf("%f",b);
    printf("\nEnter the height of the  triangle: ");
    scanf("%f",h);
}
void calculate_area(float *b,float *h,float *a){
    *a=0.5 * (*b) * (*h);
}

