#include<stdio.h>
int main(){
    double radius,area=0.0;
    double *pradius = &radius,*parea=&area;
    printf("\nenter the radius of the circle: ");
    scanf("%lf",pradius);
    *parea=3.14*(*pradius)*(*pradius);
    printf("\nthe area of the circle is: %.2lf",*parea);
    return 0;
}