#include<stdio.h>
struct student{
    int roll;
    char name[20];
    char course[20];
    float fees;
};
int main(){
    struct student *ptr_stud1;
    struct student stud1={1,"lucky","bca",45000};
    ptr_stud1=&stud1;
    printf("\ndetails of the student");
    printf("\nroll number: %d",ptr_stud1->roll);
    return 0;
}