#include<iostream>
#include<bitset>
using namespace std;
int main()
{
    unsigned long long every_other = 0xAAAA'AAAA'AAAA'AAAA;
    unsigned long long each_other = 0x5555'5555'5555'5555;
    bitset<64>bs_every(every_other);
    bitset<62>bs_each(each_other);
    cout<<bs_every<<endl;
    cout<<bs_each<<endl;  
}