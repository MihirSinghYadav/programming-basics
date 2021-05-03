#include<stdio.h>
enum COLORS{red,blue,black,green,yellow,purple,white};
int main(){
    enum COLORS c;
    char *color_name[]={"red","blue","black","green","yellow","purple","white"};
    for(c=red;c<=white;c++)
    printf("\n%s",color_name[c]);
    return 0;
}