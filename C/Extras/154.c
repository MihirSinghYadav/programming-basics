#include<stdio.h>
int main(){
  char *ch = "hello world";
  printf("\n%s",ch);

  float num1,num2,sum=0.0;
  float *pnum1= &num1,*pnum2=&num2,*psum=&sum;
  printf("\nenter 2 float numbers: ");
  scanf("\n%f %f",pnum1,pnum2);
  *psum=*pnum1+*pnum2;
  printf("\nsum=%.2f",*psum);
return 0;
}