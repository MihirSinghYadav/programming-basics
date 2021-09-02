#include <iostream>
#include <fstream>
#include <algorithm>
#include <list>
using namespace std;
int main()
{
    int arr[] = {10, 20, 30, 40, 50};
    list<int> theList;
    for (int j = 0; j < 5; j++) //transfer array to list
        theList.push_back(arr[j]);
    ofstream outfile("ITER.DAT");
    ostream_iterator<int> ositer(outfile, " ");
    cout << "\nContents of list: ";
    copy(theList.begin(), theList.end(), ositer);
    cout << endl;
    return 0;
}