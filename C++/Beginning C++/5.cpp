#include<iostream>
int main(){
    int value = 0xf1;
    int flags = 0x02;
    int result = value ^ flags;
    std::cout<<std::hex<<result<<std::endl;
}