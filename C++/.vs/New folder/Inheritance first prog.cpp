#include<iostream>
using namespace std;
class Base{
    int a,b;
    public:
    void display(){
        cout<<"Base class";
    }
};
class derived: public Base{
    int x,y;
    public:
    void display(){
        cout<< "Derived class";
    }
    void setdata(int x1, int y1){
        x=x1;
        y=y1;
    }
};
int main(){
    Base b;
    derived d;
    d.display();
    d.setdata(5,6);
    return 0;
}