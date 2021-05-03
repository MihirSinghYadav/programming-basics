#include<stdio.h>
int main(){
    struct DOB{
        int day;
        int month;
        int year;
    };
    struct student{
        int roll;
        char name[20];
        float fees;
        struct DOB date;
    };
    struct student std1;
    printf("\nEnter the roll number:");
    scanf("%d",&std1.roll);
    printf("\nEnter the Name:");
    scanf("%s",&std1.name);
    printf("\nEnter the fees:");
    scanf("%f",&std1.fees);
    printf("\nEnter the Date of birth:");
    scanf("%d %d %d",&std1.date.day,&std1.date.month,&std1.date.year);
    printf("\nStudent details are: ");
    printf("\n%d %s %f %d %d %d",std1.roll,std1.name,std1.fees,std1.date.day,std1.date.month,std1.date.year);
    return 0;
}