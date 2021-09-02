#include <iostream>
#include <list>
using namespace std;
///////////////////////////////////////////////////////////////////////////////
int main()
{
    list<int> iList(5);
    list<int>::iterator it;
    int data = 0;
    for (it = iList.begin(); it != iList.end(); it++)
        *it = data += 2;
    for (it = iList.begin(); it != iList.end(); it++)
        cout << *it << ' ';
    cout << endl;
    return 0;
}