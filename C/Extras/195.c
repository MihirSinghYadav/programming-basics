#include<stdio.h>
int main(){
    int n,i;
    struct student{
    int roll_no;
        char name[80];
        float fees;
        char DOB[80];
    };
    struct student std[50];
    printf("\nEnter the number of students: ");
    scanf("%d",&n);
    for(i=0;i<n;i++){
    printf("\nEnter the roll number:");
    scanf("%d",&std[i].roll_no);
    printf("\nEnter the Name:");
    scanf("%s",&std[i].name);
    printf("\nEnter the fees:");
    scanf("%f",&std[i].fees);
    printf("\nEnter the Date of birth:");
    scanf(" %s",&std[i].DOB);}
    for(i=0;i<n;i++){
    printf("\nStudent details are: ");
    printf("\nStudent %d - %s %f %s",std[i].roll_no,std[i].name,std[i].fees,std[i].DOB);}
    return 0;
}  