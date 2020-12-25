#include <iostream>
using namespace std;
void towerOfHanoi(int n, char src, char destination, char helper)
{
    if (n == 0)
    {
        return;
    }
    towerOfHanoi(n - 1, src, helper, destination);
    cout << "Move from " << src << " to " << destination << endl;
    towerOfHanoi(n - 1, helper, destination, src);
}
int main()
{
    towerOfHanoi(3, 'A', 'C', 'B');
    return 0;
}