//OOPs concept
//class n objects
#include<iostream>
using namespace std;
class shape{
    int side,area;
    public:
        int getArea(int n){
            side = n;
            return (area=side*side);
        }
};

int main(){

    shape square;
    cout<<square.getArea(10);
    return 0;
}