#include<iostream>
using namespace std;

class X{
    int a,b;
    public:
    void setValue(int a1,int b1){
        a=a1;
        b=b1;
    }
};
class Y{
    int a,b;
    public:
    void setValue(int a1,int b1){
        a=a1;
        b=b1;
    }
};
int main(){
    X a;
    Y b;
    a.setValue(2,3);
    b.setValue(5,6);
    cout<<"value of x before swapping"<<a.setValue(2,3)<<endl;
}
