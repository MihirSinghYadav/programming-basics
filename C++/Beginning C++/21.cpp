#include<iostream>
using namespace std;
int main(){
    char *ptr = "123456";
    ptr[3]='\0';
    cout<<ptr<<endl;
}