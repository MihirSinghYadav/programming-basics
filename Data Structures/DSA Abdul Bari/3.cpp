#include<iostream>
class Rectangle{
    private:
    int length;
    int breadth;

    public:
    Rectangle(int l,int b){
        length=l;
        breadth=b;
    }
    int area(){
        return length*breadth;
    }
    void change_length(int l){
        length=l;
    }
};
int main(){
    int a;
    Rectangle r(10,5);
    r.change_length(20);
    a=r.area();
    printf("\nArea=%d",a);
}