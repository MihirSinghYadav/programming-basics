#include <iostream>
using namespace std;

template <class T>
class Lucky
{
    T first, second;

public:
    Lucky(T a, T b)
    {
        first = a;
        second = b;
    }
    T bigger();
};

template <class T>
T Lucky<T>::bigger()
{
    return (first > second ? first : second);
}

int main()
{
    Lucky<double> lo(69, 105);
    cout << lo.bigger();
    return 0;
}