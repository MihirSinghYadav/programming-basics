#include<iostream>
using namespace std;
template<class T>
class Arithamatic{
    private:
    T a;
    T b;

    public:
    Arithamatic(T a,T b);
    T add();
    T sub();
};

template<class T>
Arithamatic<T>::Arithamatic(T a,T b){
    this->a=a;
    this->b=b;
}
template<class T>
T Arithamatic<T>::add(){
    T c;
    c=a+b;
    return c;
}
template<class T>
T Arithamatic<T>::sub(){
    T c;
    c=a-b;
    return c;
}
int main(){
    Arithamatic<int> ar(10,5);
    cout<<ar.add()<<endl;
    Arithamatic<float> br(1.5,1.2);
    cout<<br.sub()<<endl;
}