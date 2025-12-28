// The Problem with this code is when we allcate memory dynamically, then after returing out from class or after using of created object of the class,
//it does not call destructor automatically so we need to call it explicitely otherwise it will lead to memory leak.
#include <iostream>
#include <memory>
using namespace std;
class Test
{
    int x, y;

public:
    Test(int a = 0, int b = 0)
    {
        x = a;
        y = b;
        cout << "Constructor Called" << endl;
    }
    ~Test()
    {
        cout << "Destructor Called" << endl;
    }
};
int main()
{
    cout << "Mains begin" << endl;
    {
        Test *ptr = new Test(10, 20);
    }
    cout<<"Mains end"<<endl;
}