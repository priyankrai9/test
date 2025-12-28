//interview with CommDel on 18 Nov
//both funcitonality in same code i.e. overloading and overridng
#include<iostream>
using namespace std;
class A{
int a,b;
// float 
public:
//overloading
    void Sqaure(int l,int w){
        int a = l*b;
    }

    void Sqaure(float a, float b, float c){
        this->a = a*b*c;
    }


};