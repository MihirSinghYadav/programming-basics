#include<iostream>
#include<string>
#include<sstream>
#include<fstream>
#include<iomanip>
using namespace std;
const int block_length = 16;
void usage(const char* msg)
{
    cout<<"filedump filename blocks"<<endl;
    cout<<"filename (mandatory) is the name of the file to dump"<<endl;
    cout<<"blocks (option) is the number of 16 byte blocks "<<endl;
    if(nullptr==msg) return;
    cout<<endl<<"Error!";
    cout<<msg<<endl;
}
int read16(ifstream& stm)
{
    if(stm.eof()) return -1;
    int flags = cout.flags();
    cout<<hex;
    string line;
    for(int i=0;i<block_length;++i){
        unsigned char c = stm.get();
        if(stm.eof())
        break;
        cout<<setw(2)<<setfill('0');
        cout<<static_cast<short>(c)<<" ";
        if(isprint(c)==0) line+='.';
        else line +=c;
    }
    string padding=" ";
    if(line.length()<block_length)
    {
        padding+=string(3*(block_length-line.length()),' ');
    }
    cout<<padding;
    cout<<line<<endl;
    cout.setf(flags);
    return line.length();
}
int main(int argc,char* argv[])
{
    if(argc<2){
        usage("not enough parameters");
        return 1;
    }
    if(argc>3){
        usage("too many parameteres");
        return 1;
    }
    string filename = argv[1];
    int blocks = 1;
    if(3==argc){
        istringstream ss(argv[2]);
        ss>>blocks;
        if(ss.fail()||0>=blocks){
            usage("second parameter: must be a number,""and greater than zero");
            return 1;
        }
    }
    ifstream file(filename, ios::binary);
    if(!file.good())
    {
        usage("first parameter: file does not exist");
        return -1;
    }
    while(blocks-- &&read16(file) !=-1);
    file.close();
}