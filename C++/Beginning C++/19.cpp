#include<iostream>
#include<string>
using namespace std;
struct time_of_day
{
    int sec;
    int min;
    int hour;
};
void print_time(time_of_day time)
{
    cout<<setw(2)<<setfill('0')<<time.hour<<":";
    cout<<setw(2)<<setfill('0')<<time.min<<":";
    cout<<setw(2)<<setfill('0')<<time.sec<<endl;
}
int main(){
    time_of_day start_work;
    start_work.sec=0;
    start_work.min=20;
    start_work.min=8;
    print_time(start_work);
}