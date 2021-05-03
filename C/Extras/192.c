#include<stdio.h>
int main(){
    struct student
    {
        int roll_no;
        char name[80];
        float fees;
        char DOB[80];
    };
    struct student std1;
    printf("\nEnter the roll number:");
    scanf("%d",&std1.roll_no);
    printf("\nEnter the Name:");
    scanf("%s",&std1.name);
    printf("\nEnter the fees:");
    scanf("%f",&std1.fees);
    printf("\nEnter the Date of birth:");
    scanf("%s",&std1.DOB);
    printf("\nStudent details are: ");
    printf("\n%d %s %f %s",std1.roll_no,std1.name,std1.fees,std1.DOB);
    return 0;
}