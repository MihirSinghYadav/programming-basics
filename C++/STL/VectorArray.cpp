#include<iostream>
#include<vector>
#include<math.h>
#include<utility>
using namespace std;

void print_vector_array(vector<int> &v){
    for(int i=0;i<v.size();i++){
        cout<<v[i]<<" ";
    }
    cout<<endl;
}

int main(){
    int N = 3;
    //cin>>N;
    vector<int> v[3];
    /*Input:
    1 2 3
    4 5 6
    7 8 9
    */
    for(int i=0;i<3;i++){
        for(int j=0;j<3;j++){
            int x;
            cin>>x;
            v[i].push_back(x);
        }
    }
    cout<<"Vector:"<<endl;
    for(int i=0;i<N;i++){
        print_vector_array(v[i]);
    }
}