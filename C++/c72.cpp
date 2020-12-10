#include <iostream>
#include <string>
using namespace std;

int main()
{
    //substring
    string s1("omg i thing i am preggy!!");
    cout << s1.substr(17, 7) << endl;

    //swapping
    string one("apples ");
    string two("banana ");
    cout << one << two << endl;
    one.swap(two);
    cout << one << two << endl;

    string s2("ham is spam oh yes i am!");
    cout << s2.find("am") << endl;
    cout << s2.rfind("am") << endl;
    return 0;
}