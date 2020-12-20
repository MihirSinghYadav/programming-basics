#include <iostream>
#include <bits/stdc++.h>
using namespace std;
//Sum of first n natural numbers
//Ctrl + Alt + B
int sum(int n)
{
    int ans = 0;
    for (int i = 1; i <= n; i++)
        ans += i;
    return ans;
}

int main()
{
    int n;
    cin >> n;
    cout << sum(n) << endl;
    return 0;
}