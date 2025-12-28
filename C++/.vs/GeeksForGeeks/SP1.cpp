// The Problem with this code is when we allcate memory dynamically, then after returing out from class or after using of created object of the class,
// it does not call destructor automatically so we need to call it explicitely otherwise it will lead to memory leak.
// To tackle this problem we use smart pointer in which destructor will be called automatically as below-
#include <iostream>
#include <memory>
using namespace std;
class Test
{
public:
    int x, y;

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

class SP
{
    Test *ptr;

public:
    SP(Test *p = NULL) { ptr = p; }
    ~SP() { delete ptr; }
    Test &operator*() { return *ptr; }
    Test *operator->() { return ptr; }
};

int main()
{
    cout << "Mains begin" << endl;
    {
        SP sp(new Test(10, 20));
    }
    cout << "Mains end" << endl;
}