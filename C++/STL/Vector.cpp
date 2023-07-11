#include<iostream>
#include<vector>
#include<math.h>
#include<utility>
using namespace std;

void print_vector(vector<int> &v){
    cout<<"Vector size: "<<v.size()<<endl;
    for(auto it = v.begin(); it != v.end(); it++){
        cout<<*it<<" ";
    }
    cout<<endl;
}
void print_vector_string(vector<string> &v){
    cout<<"Vector size: "<<v.size()<<endl;
    for(auto it = v.begin(); it != v.end(); it++){
        cout<<*it<<" ";
    }
    cout<<endl;
}

int main(){
    int n = 5;
    vector<int> v1;
    for(int i=0;i<n;i++){
        int x;
        cin>>x;
        v1.push_back(x);
    }
    print_vector(v1);
    vector<int> v2(5, 4);
    print_vector(v2);
    vector<int> v3 = {1,2,3,4,5,6};
    v3.pop_back();
    print_vector(v3);

    vector<int>::iterator it = v1.begin();
    cout<<"it: "<<(*it+1)<<endl;
    cout<<"it: "<<(*(it+1))<<endl;

    vector<string> str = {"abc","def","ghi","jkl"};
    print_vector_string(str);
    for(string value : str)
        cout<<value<<" ";
}