#include<iostream>
#include<string>
#include<vector>
using namespace std;

int main(){
    vector<string> beatles={"john","paul","george","ringo"};
    for(int i=0;i<beatles.size();++i)
    {
        cout<<beatles.at(i)<<endl;
    }
    std::cout<<std::endl;
    for(string musician : beatles)
    {
        cout<<musician<<endl;
    }
}