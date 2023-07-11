#include<iostream>
#include<vector>
#include<math.h>
#include<utility>
using namespace std;

void print_vector_array(vector<int> &v){
    cout<<"Size: "<<v.size()<<endl;
    for(int i=0;i<v.size();i++){
        cout<<v[i]<<" ";
    }
    cout<<endl;
}

int main(){
    int N;
    cin>>N;
    vector<vector<int>> v;
    for(int i=0;i<N;i++){
        int n; cin>>n;
        vector<int> temp;
        for(int j=0;j<n;j++){
            int x; cin>>x;
            temp.push_back(x);
        }
        v.push_back(temp);
    }
    v[0].push_back(10);
    v.push_back(vector<int>());
    cout<<"\nVector:"<<endl;
    for(int i=0;i<v.size();i++){
        print_vector_array(v[i]);
    }
}

/*Input:
3
3
1 2 3
3
3 4 5
2
1 2
*/