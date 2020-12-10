#include <iostream>
using namespace std;

class StankFist
{
public:
    StankFist() { stinkyVar = 0; }

private:
    int stinkyVar;
    friend void stinkyFriend(StankFist &sfo);
};
void stinkyFriend(StankFist &sfo)
{
    sfo.stinkyVar = 99;
    cout << sfo.stinkyVar << endl;
}
int main()
{
    StankFist bob;
    stinkyFriend(bob);
    return 0;
}