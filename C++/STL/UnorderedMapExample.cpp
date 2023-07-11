#include<iostream>
#include<vector>
#include<math.h>
#include<utility>
#include<map>
#include<unordered_map>

using namespace std;

void print_map_string(unordered_map<string,int> &m){
    cout<<"\nSize: "<<m.size()<<endl;
    for(auto &value : m){
        cout<<value.first<<" - "<<value.second<<endl;
    }
    cout<<endl;
}

/*Input:
8
abc
def
abc
ghj
jkl
ghj
ghj
abc

2
abc
ghj
*/

int main(){
	unordered_map<string,int>m;
	int n;
	cin>>n;
	for(int i=0;i<n;i++){
		string s;
		cin>>s;
		m[s]++;
		cout<<m[s]<<endl;
	}

	print_map_string(m);

	int q;
	cin>>q;
	while(q--){
		string s;
		cin>>s;
		cout<<m[s]<<endl;
	}
}