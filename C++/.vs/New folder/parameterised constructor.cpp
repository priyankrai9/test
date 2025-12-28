#include<iostream>
using namespace std;
class Complex{
    int a,b;
    public:
    Complex(int , int);
    void printData(){
        cout<<"You complex number is: " <<a<<" + " <<b<<"i"<<endl;
    }
};
Complex ::Complex(int x, int y){
    a = x;
    b = y;
    // cout<<"You complex number is: " <<a<<" + " <<b<<"i"<<endl;
};
int main(){
    Complex c1(4,6);
    c1.printData();
    return 0;
}