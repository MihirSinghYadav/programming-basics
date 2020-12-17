#include <iostream>
using namespace std;

int main()
{
    int age;
    int agetotal = 0;
    int numberofpeopleentered = 0;

    cout << "enter firrst persons age or -1 to quit" << endl;
    cin >> age;

    while (age != -1)
    {
        agetotal += age;
        numberofpeopleentered++;

        cout << "enter next persons age or -1 to quit" << endl;
        cin >> age;
    }
    cout << "number of people entered: " << numberofpeopleentered << endl;
    cout << "average age: " << agetotal / numberofpeopleentered << endl;
    return 0;
}