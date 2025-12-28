#include<iostream>
using namespace std;
class Base{
    int a;
    public:
    void display(){
        cout<<a<<endl;
    }
    void setData(int x){
        a=x;
    }
};

int main(){
    Base obj1;
    int x =10;
    obj1.setData(x);
    obj1.display();
    return 0;
}