#include <iostream>
using namespace std;
//Check Palindrome
int main()
{
    int n;
    cin >> n;
    char arr[n + 1];
    cin >> arr;
    bool check = true;
    for (int i = 0; i < n; i++)
    {
        if (arr[i] != arr[n - 1 - i])
        {
            check = 0;
            break;
        }
    }
    if (check == true)
        cout << "word is a palindrome" << endl;
    else
    {
        cout << "word is not palindrome" << endl;
    }
    return 0;
}