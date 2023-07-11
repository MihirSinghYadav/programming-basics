#include<iostream>
#include<vector>
#include<math.h>
#include<utility>
using namespace std;

const int N = 1e7 + 10;
int hsh[N];

int main(){
    /*
    Input:
    6
    3 5 5 7 7 8
    5
    3
    7
    5
    8
    9
    Output:
    1
    2
    2
    1
    0
    */
    int n = 6;
    int a[6];
    for(int i=0;i<n;i++){
        cin>>a[i];
        hsh[a[i]]++;
    }
    int q;
    cin>>q;
    while(q--){
        int x;
        cin>>x;
        cout<<hsh[x]<<endl;
    }
}