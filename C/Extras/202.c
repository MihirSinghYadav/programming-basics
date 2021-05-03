#include<stdio.h>
typedef struct a{
    int marks;
    char name[20];
}a;
typedef struct b{
    int marks;
    int roll;
}b;
typedef union Student{
    struct a A;
    struct b B;
}Student;
int main(){
    union Student s;
    char ch;
    printf("\nDo you want to enter roll number (Y/N): ");
    scanf("%c",&ch);
    if(ch=='Y'){
        printf("\nEnter the roll number: ");
        scanf("%d",&s.B.roll);
        printf("\nEnter the marks: ");
        scanf("%d",&s.B.marks);
    }
    else
    {
        printf("\nEnter the Name: ");
        scanf("%s",s.A.name);
        printf("\nEnter the marks: ");
        scanf("%d",&s.A.marks);
    }
    printf("\nStudent details: ");
    if(ch=='N'){
        printf("\nName: ");
        puts(s.A.name);
        printf("\nMarks: %d",s.A.marks);
    }else{
        printf("\nRoll: %d",s.B.roll);
        printf("\nMarks: %d",s.B.marks);
    }
}