#include<iostream>
using namespace std;

class Shape{
    int side,area;
    public:
    Shape(){}
    Shape(Shape &obj){
        side = obj.side;
        cout<<"inside copy constructor"<<endl;
    }
};

int main(){
    Shape sqaure;
    Shape Copy(sqaure);

}