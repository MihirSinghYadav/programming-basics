#include <iostream>
using namespace std;
void Func(int &a, const int &b);
int main()
{
    int alpha = 7;
    int beta = 11;
    Func(alpha, beta);
    return 0;
}
void Func(int &a, const int &b)
{
    a = 109;
    b = 111;
}