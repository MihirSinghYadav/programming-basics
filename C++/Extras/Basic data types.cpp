#include <iostream>
#include <cmath>
#include <cstdio>
using namespace std;
/*input- 3 12345678912345 a 334.23 14049.30493*/
int main()
{
    // Complete the code.
    int a;
    cin >> a;
    long b;
    cin >> b;
    char c;
    cin >> c;
    float d;
    cin >> d;
    double e;
    cin >> e;

    cout << a << endl;
    cout << b << endl;
    cout << c << endl;
    printf("%.3f\n", d);
    printf("%.9e\n", e);
    return 0;
}