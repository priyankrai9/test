#include<iostream>
using namespace std;
class Base{
    int a,b;
    public:
    friend class derived;
    virtual void display()=0;
    // {
        // cout<<"Base class"<<endl;
    // }
};
class derived: public Base{
    int x,y;
    public:
    void display(){
        cout<< "Derived class"<<endl;
    }
    void setdata(int x1, int y1){
        a=x1;
        b=y1;
    }
};
int main(){
    Base *b;
    derived d;
    b=&d;
    b->display();
    //d.a=5;
    //d.display();
    //d.setdata(5,6);
    return 0;
}