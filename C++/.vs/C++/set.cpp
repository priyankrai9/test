#include<iostream>
#include<set>
using namespace std;
int main(){
    set <int> s;
    s.insert(10);
    s.insert(20);
    s.insert(50);
    s.erase(20);
    int *val=s.find(50);
    cout<<val;
    return 0;
}