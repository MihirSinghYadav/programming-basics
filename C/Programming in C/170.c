#include<stdio.h>
int main(){
    int i,n,arr[20],sum=0;
    int *pn=&n,*parr=arr,*psum=&sum;
    float mean = 0.0,*pmean=&mean;
    printf("\nEnter the number of elements: ");
    scanf("%d",pn);
    for(i=0;i<*pn;i++){
        printf("\nEnter element %d: ",i);
        scanf("%d",(parr+i));
    }
    for(i=0;i<*pn;i++){
        *psum+=*(arr+i);
    }
    *pmean=(float)*psum/ *pn;
    printf("\nThe numbers you entered are: ");
    for(i=0;i<*pn;i++){
        printf("%d ",*(arr+i));
    }
    printf("\nThe sum is: %d",*psum);
    printf("\nThe mean is: %f",*pmean);
    return 0;
}