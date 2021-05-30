#include<iostream>
int main(){
    for(int i=0;i<10;++i)
    {
        std::cout<<i<<std::endl;
        if(i==5)goto end;
    }
    end:
    std::cout<<"end";
}