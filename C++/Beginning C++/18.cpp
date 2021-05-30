#include<iostream>
#include<vector>
#include<string>
#include<tuple>
using namespace std;
int main(){
    vector<tuple<string,int>>beatles;
    beatles.push_back(make_tuple("john",1940));
    beatles.push_back(make_tuple("john",1940));
    beatles.push_back(make_tuple("john",1940));
    beatles.push_back(make_tuple("john",1940));
    // for(tuple<string,int>musician:beatles)
    // {
    //     cout<<get<0>(musician)<<" "<<get<1>(musician)<<endl;
    // }
    for(auto musician:beatles)
    {
        cout<<get<0>(musician)<<" "<<get<1>(musician)<<endl;
    }
}