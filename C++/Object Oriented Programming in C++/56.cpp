#include <iostream>
#include <string>
using namespace std;
int main()
{
    string s1 = "in xanadu did Kubla kahn a stately pleasure dome decree";
    int n;
    n = s1.find("Kubla");
    cout << "Found Kubla at " << n << endl;

    n = s1.find_first_of("spde");
    cout << "First of spde at " << n << endl;

    n = s1.find_first_not_of("aeiouAEIOU");
    cout << "First consonant at " << n << endl;
    return 0;
}