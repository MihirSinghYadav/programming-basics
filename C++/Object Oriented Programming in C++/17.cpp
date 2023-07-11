#include <iostream>
using namespace std;
#include <conio.h>
enum itsword
{
    NO,
    YES
};
int main()
{
    itsword isWord = NO;
    char ch = 'a';
    int wordcount = 0;
    cout << "Enter a phrase:\n";
    do
    {
        ch = getche();
        if (ch == ' ' || ch == '\r')
        {
            if (isWord == YES)
            {
                wordcount++;
                isWord = NO;
            }
        }
        else if (isWord == NO)
            isWord = YES;
    } while (ch != '\r');
    cout << "\n---Word count is " << wordcount << "---\n";
    return 0;
}