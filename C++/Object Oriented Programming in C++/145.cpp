#include <iostream>
using namespace std;
int main(int argc, char *argv[])
{
    cout << "\nargc = " << argc << endl;
    for (int j = 0; j < argc; j++)
        cout << "Argument " << j << " = " << argv[j] << endl;
    return 0;
}