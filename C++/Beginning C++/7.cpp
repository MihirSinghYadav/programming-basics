#include<iostream>
int main(){
    int number;
    std::cout<<"enter number of items"<<std::endl;
    std::cin>>number;
    std::cout<<"there "
    <<((number==1)?"is ":"are ")
    <<number<<" item"
    <<((number==1)?"":"s")
    <<std::endl;
}