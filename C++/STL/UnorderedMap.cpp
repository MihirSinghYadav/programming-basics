#include<iostream>
#include<unordered_map>
using namespace std;

void print_unordered_map(unordered_map<int,string> &m){
    cout<<"\nSize: "<<m.size()<<endl;
    for(auto &value : m){
        cout<<value.first<<" - "<<value.second<<endl;
    }
}

int main(){
    unordered_map<int,string> m;
    // Insert values using insert function
    m.insert(std::make_pair(1,"abc"));
    // Update values using subscript operator
    m[4] = "def";
    m[3] = "ghi";
    m[6] = "dsf";
    m[5] = "ret";
    m[11] = "sad";
    m[12] = "dear";
    // Insert or update values using insert_or_assign function
    m.insert_or_assign(1,"halt");
    m.erase(11);
    print_unordered_map(m);
    
}