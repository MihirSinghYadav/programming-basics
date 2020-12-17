#include <iostream>
using namespace std;

void printnumber(int x)
{
    cout << "i am printing an integer: " << x << endl;
}
void printnumber(float x)
{
    cout << "i am printing an float: " << x << endl;
}
int main()
{
    int a = 54;
    float b = 32.4896;

    printnumber(a);
    printnumber(b);
    return 0;
}