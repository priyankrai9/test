#include<iostream>
using namespace std;
class Complex{
    int a;
    int b;

    public:
    void setData(int p1, int p2){
        a = p1;
        b = p2;
    }
    friend Complex setComplex(Complex o1, Complex o2);
    void printData(){
        cout<<"Complex numbers are"<<a<<" + "<<b<<"i"<<endl;
    }
};
Complex setComplex(Complex o3, Complex o4){
    Complex o5;
    o5.setData((o3.a+o4.a),(o3.b+o4.b));
    return o5;
}

int main(){
    Complex c1,c2,sum;
    c1.setData(1,2);
    c1.printData();

    c2.setData(3,4);
    c2.printData();

    sum = setComplex(c1,c2);
    sum.printData();
    return 0;
}