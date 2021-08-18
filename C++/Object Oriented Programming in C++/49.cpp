#include <iostream>
#include <cstring>
using namespace std;
int main()
{
    char str1[] = "oh,captain,my captain! our fearful trip is done ";
    const int MAX = 80;
    char str2[MAX];
    int j;
    cout << strlen(str1);
    for (int j = 0; j < strlen(str1); j++)
    {
        str2[j] = str1[j];
    }
    j++;
    str2[j] = '\0';
    cout << str2 << endl;
    return 0;
}