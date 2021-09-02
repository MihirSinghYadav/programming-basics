#include <iostream>
using namespace std;
////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
class beta;

class alpha
{
private:
    int data;

public:
    alpha() : data(3) {}
    friend int friend_function(alpha, beta);
};
////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
class beta
{
private:
    int data;

public:
    beta() : data(7) {}
    friend int friend_function(alpha, beta);
};
////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
int friend_function(alpha a, beta b)
{
    return (a.data + b.data);
}
////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
int main()
{
    alpha aa;
    beta bb;
    cout << friend_function(aa, bb) << endl;
    return 0;
}