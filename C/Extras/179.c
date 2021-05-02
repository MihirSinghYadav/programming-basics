#include<stdio.h>
char *day_of_week(int);
int main(){
    int day_num;
    char *day;
    printf("\nEnter the day from 1 to 7: ");
    scanf("%d",&day_num);
    day=day_of_week(day_num);
    if(day){
        printf("\n%s",day);
    }
    else{
        printf("\nInvalid day");
    }
    return 0;
}
char *day_of_week(int day){
    char *week_day[7]={"sunday","monday","tuesday","wednesday","thursday","friday","saturday"};
    if(day>=1||day<=7){
        return week_day[day-1];
    }
    else{
        return NULL;
    }
}