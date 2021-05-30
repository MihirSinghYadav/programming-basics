#include<iostream>
int main(int argc,char *argv[]){
    std::cout<<"there are "<<argc<<" parameters"<<std::endl;
    for(int i=0;i<argc;++i){
        std::cout<<argv[i]<<std::endl; 
    }
}