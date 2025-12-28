#include<iostream>
using namespace std;
class Complex{
    int a,b;
    public:
    Complex(void);
    void printData(){
        cout<<"You complex number is: " <<a<<" + " <<b<<"i"<<endl;
    }
};
Complex ::Complex(void){
    a = 10;
    b = 20;
};
int main(){
    Complex c1;
    c1.printData();
    return 0;
}