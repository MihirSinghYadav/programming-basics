#include<iostream>
#include<vector>
using namespace std;
int main(){
    cout<<"this is \x43\x2b\05\n";
    cout<<"mary had a little lamb,\n its fleece was white as snow."<<endl;
    wchar_t dollar = L'$';
    wcout<<dollar<<endl;
    vector<int>a1(42);
    cout<<" size "<<a1.size()<<endl;
    for(int i:a1)cout<<i<<endl;
}