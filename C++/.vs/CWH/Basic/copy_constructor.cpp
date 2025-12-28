#include<iostream>
using namespace std;
class Complex{
    int a,b;
    public:
    Complex(){
        a =0;
        b=0;
    }
    Complex(int x,int y){
        a=x;
        b=y;
    }
    Complex(Complex &obj){
        cout<< "Copy Constructor called";
        a=obj.a;
        b=obj.b;
    }
    void display(){
        cout<<a<<" "<< b<<endl;
    }
};
int main(){
    Complex A,B,C;
    A.display();
    B.display();
    C.display();
    Complex D(A);
    return 0;
}