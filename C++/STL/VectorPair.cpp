#include<iostream>
#include<vector>
#include<math.h>
#include<utility>
using namespace std;

void print_vector_pair(vector<pair<int,int>> &v){
    cout<<"Vector Size: "<<v.size()<<endl;
    // for(int i=0;i<v.size();i++){
    //     cout<<v[i].first<<" "<<v[i].second<<endl;
    // }
    for(auto it = v.begin();it != v.end();it++){
        cout<<it->first<<" "<<it->second<<endl;
    }
}

int main(){
    vector<pair<int,int>> v1 = {{1,2},{2,3},{3,4},{4,5}};
    v1.push_back({5,6});
    v1.push_back(make_pair(6,7));
    print_vector_pair(v1);
}