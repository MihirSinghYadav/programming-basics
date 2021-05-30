#include<iostream>
int main(){
    int i;
    std::cin>>i;
    switch(i)
    {
        case 1:
        std::cout<<"one"<<std::endl;
        break;
        case 2:
        std::cout<<"two"<<std::endl;
        break;
        case 3:
        std::cout<<"three"<<std::endl;
        break;
        default:
        std::cout<<"other"<<std::endl;
    }
}