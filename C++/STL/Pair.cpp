#include<iostream>
#include<vector>
#include<math.h>
#include<utility>
using namespace std;

int main(){
    cout<<"pair<int,string>"<<endl;
    pair<int,string> p;

    p = make_pair(2, "abc");
    cout<<p.first<<" "<<p.second<<endl;
    p = {3, "abcd"};
    cout<<p.first<<" "<<p.second<<endl;

    pair<int,string> &p1 = p;
    p = {4, "abcd"};
    cout<<p.first<<" "<<p.second<<endl;
    cout<<p1.first<<" "<<p1.second<<endl;

    cout<<"\npair<int,int>"<<endl;
    pair<int,int> parr[3] = {{1,2},{2,3},{3,4}};
    parr[1] = {2,4};
    swap(parr[0],parr[2]);

    for(auto &it : parr){
        cout<<it.first<<" "<<it.second<<endl;
    }
}