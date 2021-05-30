#include<stdio.h>
struct rectangle{
    int length;
    int breadth;
};
void change_length(struct rectangle *p,int l){
    p->length=l;
}
int main(){
    struct rectangle r={10,5};
    change_length(&r,20);
    printf("\nLength = %d",r.length);
}