#include<iostream>
#include<vector>
#include<math.h>
#include<utility>
using namespace std;

int factorial(int n){
    if(n==0) 
        return 1;
    return factorial(n-1) * n;
}

int sum(int n, int a[]){
    if(n<0)
        return 0;
    return sum(n-1, a) + a[n];
}

int digit_sum(int n){
    if(n==0)
        return 0;
    return digit_sum(n/10) + (n%10);
}

int main(){
    int n = 6;
    cout<<factorial(n)<<endl;

    int a[] = {1,2,3,4,5,6,7,8,9};
    cout<<sum(7, a)<<endl;

    int b = 123456789;
    cout<<digit_sum(b)<<endl;
}