#include <iostream>
using namespace std;
int main()
{
    char *str = "Idle hands are devil's workshop.";
    int len = strlen(str);
    char *ptr;
    ptr = new char[len + 1];
    strcpy(ptr, str);
    cout << "ptr=" << ptr << endl;
    delete[] ptr;
    return 0;
}