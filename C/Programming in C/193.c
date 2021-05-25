#include<stdio.h>
int main(){
    typedef struct complex{
        int real;
        int img;
    }COMPLEX;
    COMPLEX c1,c2,sum_c,sub_c;
    int option;
    do{
        printf("\n1.read the complex numbers: ");
        printf("\n2.display the numbers: ");
        printf("\n3.add numbers: ");
        printf("\n4.Exit");
        printf("\nEnter your option: ");
        scanf("%d",&option);
        switch(option){
            case 1:
            printf("\nenter the numbers");
            scanf("%d %d",&c1.real,&c1.img);
            printf("\nenter the numbers");
            scanf("%d %d",&c2.real,&c2.img);
            break;
            case 2:
            printf("\n%d + %di",c1.real,c1.img);
            printf("\n%d + %di",c2.real,c2.img);
            break;
            case 3:
            sum_c.real=c1.real+c2.real;
            sum_c.img=c1.img+c2.img;
            printf("\nSUm = %d+%di",sum_c.real,sum_c.img);
            break;
        }
    }while(option!=4);
    getch();
    return 0;
}