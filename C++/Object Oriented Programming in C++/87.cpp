#include <iostream>
using namespace std;
int main()
{
    int intvar;
    float flovar;
    int *ptrint;
    float *ptrflo;
    void *ptrvoid;
    ptrint = &intvar;
    //ptrint=&flovar;
    ptrint = reinterpret_cast<int *>(flovar);
    //ptrflo=&intvar;
    ptrflo = reinterpret_cast<float *>(intvar);
    ptrflo = &flovar;
    ptrvoid = &intvar;
    ptrvoid = &flovar;
    return 0;
}