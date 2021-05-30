#include<iostream>
#ifdef DEBUG
#define MESSAGE(c,v) for(int i=1;i<c;++i) std::cout<<v[i]<<std::endl;
#else
#define MESSAGE
#endif
int main(int argc,char *argv[]){
    MESSAGE(argc,argv);
    std::cout<<"invoked with "<<argv[0]<<std::endl;
}