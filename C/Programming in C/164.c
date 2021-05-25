#include<stdio.h>
int greater(int *a,int *b,int *c,int *large);
int main(){
  int num1,num2,num3,large;
  printf("\nEnter the first number: ");
  scanf("%d",&num1);
  printf("\nEnter the second number: ");
  scanf("%d",&num2);
  printf("\nEnter the third number: ");
  scanf("%d",&num3);
  greater(&num1,&num2,&num3,&large);
  return 0;
}
int greater(int *a,int *b,int *c,int *large){
  if(*a>*b&&*a>*c){
    *large=*a;
  }
  else if(*b>*a&&*b>*c){
    *large=*b;
  }
  else{
    *large=*c;
  }
  printf("\nLargest number is: %d",*large);
}