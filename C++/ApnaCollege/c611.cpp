#include <iostream>
using namespace std;

void print(int num)
{
    cout << num << endl;
    return;
}
int add(int num1, int num2)
{
    print(num1);
    print(num2);
    int sum = num1 + num2;
    return sum;
}

int main()
{
    int a = 2;
    int b = 3;
    cout << add(a, b) << endl;
    return 0;
}