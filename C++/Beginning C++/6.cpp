#include<iostream>
int main(){
    unsigned short s1=0x0010;
    unsigned short s2=s1<<8;
    std::cout<<std::hex<<std::showbase;
    std::cout<<s2<<std::endl;
    s2=s2<<3;
    std::cout<<s2<<std::endl;
    int i=0x1000;
    i*=8;
    i<<=3;
    std::cout<<i<<std::endl;
}