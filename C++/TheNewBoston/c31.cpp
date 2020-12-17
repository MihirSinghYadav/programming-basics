#include <iostream>
using namespace std;
/*void lucky()
{
    cout << "project-x ";
    lucky();
}
int main()
{
    lucky();
    return 0;
}*/
int factorialfinder(int x)
{
    if (x == 1)
    {
        return 1;
    }
    else
    {
        return x * factorialfinder(x - 1);
    }
}
int main()
{
    cout << factorialfinder(11) << endl;
}