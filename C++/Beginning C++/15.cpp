#include<iostream>
#include<cstdint>
using namespace std;
int main(){
cout<<sizeof(int8_t)<<endl;
cout<<sizeof(int16_t)<<endl;
cout<<sizeof(int32_t)<<endl;
cout<<sizeof(int64_t)<<endl;
cout<<sizeof(int)<<endl;
int i=3;
signed s=3;
unsigned int ui = 3U;
long l=3L;
unsigned long ul=3UL;
long long ll = 3LL;
unsigned long long ull=3ULL;
unsigned long long every_other = 0xAAAA'AAAA'AAAA'AAAA;
unsigned long long each_other = 0x5555'5555'5555'5555;
cout<<hex<<showbase<<uppercase;
cout<<every_other<<endl;
cout<<each_other<<endl;
}
