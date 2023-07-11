#include <iostream>
using namespace std;
class smallobject
{
private:
    int somedata;

public:
    void setdata(int d)
    {
        somedata = d;
    }
    void showdata()
    {
        cout << "data is " << somedata << endl;
    }
};

int main()
{
    smallobject s1, s2;
    s1.setdata(1066);
    s2.setdata(1776);
    s1.showdata();
    s2.showdata();
    return 0;
}