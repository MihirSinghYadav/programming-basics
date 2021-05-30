#include<iostream>
int main(){
    for(float divisor = 0.f;divisor<10.f;++divisor)
    {
        std::cout<<divisor;
        if(divisor==0)
        {
            std::cout<<std::endl;
            continue;
        }
        std::cout<<" "<<(1/divisor)<<std::endl;
    }
}