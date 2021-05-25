#include<stdio.h>
int main(){
    {
        enum {red,blue,black};
        printf("\nred = %d",red);
        printf("\nblue = %d",blue);
        printf("\nblack = %d",black);
    }
    return 0;
}