#include <iostream>
//using namespace std;
int main()
{
    float i, c;
    std::cout << "enter inch \n";
    std::cin >> i;
    c = i * 2.54;
    std::cout << " size is " << c << " cm";
    std::cout << " \nsize of " << sizeof(char);
    //cin.get();
    return 0;
}