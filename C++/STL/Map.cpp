#include<iostream>
#include<map>
using namespace std;

void print_map(map<int,string> &m){
    cout<<"\nSize: "<<m.size()<<endl;
    for(auto &value : m){
        cout<<value.first<<" - "<<value.second<<endl;
    }
}

void print_map_string(map<string,string> &m){
    cout<<"\nSize: "<<m.size()<<endl;
    for(auto &value : m){
        cout<<value.first<<" - "<<value.second<<endl;
    }
}

int main(){
    map<int,string> m;
    // Insert values using insert function
    m.insert(std::make_pair(1,"abc"));
    // Update values using subscript operator
    m[4] = "def";
    m[3] = "ghi";
    m[6] = "dsf";
    m[5] = "ret";
    m[11] = "sdew";
    m[12] = "dfsef";
    // Insert or update values using insert_or_assign function
    m.insert_or_assign(1,"ahgf");
    m.erase(11);
    auto it = m.find(6);
    if(it == m.end())
        cout<<"No value";
    else
        cout<<it->first<<" - "<<it->second<<endl;
    print_map(m);

    map<string,string> m1;
    m1["adsf"] = "adsff";
    print_map_string(m1);
    m.clear();
    m1.clear();
}