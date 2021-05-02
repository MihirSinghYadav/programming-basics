#include<stdio.h>
float (*func)(float,float);
float add(float,float);
float sub(float,float);
int main(){
    //int (*fp)(int)=NULL;
    func=add;
    printf("\nAddition = %f",func(9.5,3.1));
    func=sub;
    printf("\nSubtraction = %f",func(9.5,3.1));
    return 0;
}
float add(float x,float y){
    return (x+y);
}
float sub(float x,float y){
    return (x-y);
}